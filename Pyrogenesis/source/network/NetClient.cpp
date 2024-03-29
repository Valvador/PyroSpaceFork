/* Copyright (C) 2011 Wildfire Games.
 * This file is part of 0 A.D.
 *
 * 0 A.D. is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * 0 A.D. is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with 0 A.D.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "precompiled.h"

#include "NetClient.h"

#include "NetMessage.h"
#include "NetSession.h"
#include "NetTurnManager.h"

#include "lib/byte_order.h"
#include "lib/sysdep/sysdep.h"
#include "ps/CConsole.h"
#include "ps/CLogger.h"
#include "ps/Compress.h"
#include "ps/CStr.h"
#include "ps/Game.h"
#include "ps/GUID.h"
#include "ps/Loader.h"
#include "scriptinterface/ScriptInterface.h"
#include "simulation2/Simulation2.h"

CNetClient *g_NetClient = NULL;

/**
 * Async task for receiving the initial game state when rejoining an
 * in-progress network game.
 */
class CNetFileReceiveTask_ClientRejoin : public CNetFileReceiveTask
{
	NONCOPYABLE(CNetFileReceiveTask_ClientRejoin);
public:
	CNetFileReceiveTask_ClientRejoin(CNetClient& client)
		: m_Client(client)
	{
	}

	virtual void OnComplete()
	{
		// We've received the game state from the server

		// Save it so we can use it after the map has finished loading
		m_Client.m_JoinSyncBuffer = m_Buffer;

		// Pretend the server told us to start the game
		CGameStartMessage start;
		m_Client.HandleMessage(&start);
	}

private:
	CNetClient& m_Client;
};

CNetClient::CNetClient(CGame* game) :
	m_Session(NULL),
	m_UserName(L"anonymous"),
	m_GUID(ps_generate_guid()), m_HostID((u32)-1), m_ClientTurnManager(NULL), m_Game(game)
{
	m_Game->SetTurnManager(NULL); // delete the old local turn manager so we don't accidentally use it

	void* context = this;

	// Set up transitions for session
	AddTransition(NCS_UNCONNECTED, (uint)NMT_CONNECT_COMPLETE, NCS_CONNECT, (void*)&OnConnect, context);

	AddTransition(NCS_CONNECT, (uint)NMT_SERVER_HANDSHAKE, NCS_HANDSHAKE, (void*)&OnHandshake, context);

	AddTransition(NCS_HANDSHAKE, (uint)NMT_SERVER_HANDSHAKE_RESPONSE, NCS_AUTHENTICATE, (void*)&OnHandshakeResponse, context);

	AddTransition(NCS_AUTHENTICATE, (uint)NMT_AUTHENTICATE_RESULT, NCS_INITIAL_GAMESETUP, (void*)&OnAuthenticate, context);

	AddTransition(NCS_INITIAL_GAMESETUP, (uint)NMT_GAME_SETUP, NCS_PREGAME, (void*)&OnGameSetup, context);

	AddTransition(NCS_PREGAME, (uint)NMT_CHAT, NCS_PREGAME, (void*)&OnChat, context);
	AddTransition(NCS_PREGAME, (uint)NMT_GAME_SETUP, NCS_PREGAME, (void*)&OnGameSetup, context);
	AddTransition(NCS_PREGAME, (uint)NMT_PLAYER_ASSIGNMENT, NCS_PREGAME, (void*)&OnPlayerAssignment, context);
	AddTransition(NCS_PREGAME, (uint)NMT_GAME_START, NCS_LOADING, (void*)&OnGameStart, context);
	AddTransition(NCS_PREGAME, (uint)NMT_JOIN_SYNC_START, NCS_JOIN_SYNCING, (void*)&OnJoinSyncStart, context);

	AddTransition(NCS_JOIN_SYNCING, (uint)NMT_CHAT, NCS_JOIN_SYNCING, (void*)&OnChat, context);
	AddTransition(NCS_JOIN_SYNCING, (uint)NMT_GAME_SETUP, NCS_JOIN_SYNCING, (void*)&OnGameSetup, context);
	AddTransition(NCS_JOIN_SYNCING, (uint)NMT_PLAYER_ASSIGNMENT, NCS_JOIN_SYNCING, (void*)&OnPlayerAssignment, context);
	AddTransition(NCS_JOIN_SYNCING, (uint)NMT_GAME_START, NCS_JOIN_SYNCING, (void*)&OnGameStart, context);
	AddTransition(NCS_JOIN_SYNCING, (uint)NMT_SIMULATION_COMMAND, NCS_JOIN_SYNCING, (void*)&OnInGame, context);
	AddTransition(NCS_JOIN_SYNCING, (uint)NMT_END_COMMAND_BATCH, NCS_JOIN_SYNCING, (void*)&OnJoinSyncEndCommandBatch, context);
	AddTransition(NCS_JOIN_SYNCING, (uint)NMT_LOADED_GAME, NCS_INGAME, (void*)&OnLoadedGame, context);

	AddTransition(NCS_LOADING, (uint)NMT_CHAT, NCS_LOADING, (void*)&OnChat, context);
	AddTransition(NCS_LOADING, (uint)NMT_GAME_SETUP, NCS_LOADING, (void*)&OnGameSetup, context);
	AddTransition(NCS_LOADING, (uint)NMT_PLAYER_ASSIGNMENT, NCS_LOADING, (void*)&OnPlayerAssignment, context);
	AddTransition(NCS_LOADING, (uint)NMT_LOADED_GAME, NCS_INGAME, (void*)&OnLoadedGame, context);

	AddTransition(NCS_INGAME, (uint)NMT_CHAT, NCS_INGAME, (void*)&OnChat, context);
	AddTransition(NCS_INGAME, (uint)NMT_GAME_SETUP, NCS_INGAME, (void*)&OnGameSetup, context);
	AddTransition(NCS_INGAME, (uint)NMT_PLAYER_ASSIGNMENT, NCS_INGAME, (void*)&OnPlayerAssignment, context);
	AddTransition(NCS_INGAME, (uint)NMT_SIMULATION_COMMAND, NCS_INGAME, (void*)&OnInGame, context);
	AddTransition(NCS_INGAME, (uint)NMT_SYNC_ERROR, NCS_INGAME, (void*)&OnInGame, context);
	AddTransition(NCS_INGAME, (uint)NMT_END_COMMAND_BATCH, NCS_INGAME, (void*)&OnInGame, context);

	// Set first state
	SetFirstState(NCS_UNCONNECTED);
}

CNetClient::~CNetClient()
{
	DestroyConnection();
}

void CNetClient::SetUserName(const CStrW& username)
{
	ENSURE(!m_Session); // must be called before we start the connection

	m_UserName = username;
}

bool CNetClient::SetupConnection(const CStr& server)
{
	CNetClientSession* session = new CNetClientSession(*this);
	bool ok = session->Connect(PS_DEFAULT_PORT, server);
	SetAndOwnSession(session);
	return ok;
}

void CNetClient::SetAndOwnSession(CNetClientSession* session)
{
	delete m_Session;
	m_Session = session;
}

void CNetClient::DestroyConnection()
{
	SAFE_DELETE(m_Session);
}

void CNetClient::Poll()
{
	if (m_Session)
		m_Session->Poll();
}

void CNetClient::Flush()
{
	if (m_Session)
		m_Session->Flush();
}

CScriptValRooted CNetClient::GuiPoll()
{
	if (m_GuiMessageQueue.empty())
		return CScriptValRooted();

	CScriptValRooted r = m_GuiMessageQueue.front();
	m_GuiMessageQueue.pop_front();
	return r;
}

void CNetClient::PushGuiMessage(const CScriptValRooted& message)
{
	ENSURE(!message.undefined());

	m_GuiMessageQueue.push_back(message);
}

std::wstring CNetClient::TestReadGuiMessages()
{
	std::wstring r;
	while (true)
	{
		CScriptValRooted msg = GuiPoll();
		if (msg.undefined())
			break;
		r += GetScriptInterface().ToString(msg.get()) + L"\n";
	}
	return r;
}

ScriptInterface& CNetClient::GetScriptInterface()
{
	return m_Game->GetSimulation2()->GetScriptInterface();
}

void CNetClient::PostPlayerAssignmentsToScript()
{
	CScriptValRooted msg;
	GetScriptInterface().Eval("({'type':'players', 'hosts':{}})", msg);

	CScriptValRooted hosts;
	GetScriptInterface().GetProperty(msg.get(), "hosts", hosts);

	for (PlayerAssignmentMap::iterator it = m_PlayerAssignments.begin(); it != m_PlayerAssignments.end(); ++it)
	{
		CScriptValRooted host;
		GetScriptInterface().Eval("({})", host);
		GetScriptInterface().SetProperty(host.get(), "name", std::wstring(it->second.m_Name), false);
		GetScriptInterface().SetProperty(host.get(), "player", it->second.m_PlayerID, false);
		GetScriptInterface().SetProperty(hosts.get(), it->first.c_str(), host, false);
	}

	PushGuiMessage(msg);
}

bool CNetClient::SendMessage(const CNetMessage* message)
{
	if (!m_Session)
		return false;

	return m_Session->SendMessage(message);
}

void CNetClient::HandleConnect()
{
	Update((uint)NMT_CONNECT_COMPLETE, NULL);
}

void CNetClient::HandleDisconnect(u32 reason)
{
	CScriptValRooted msg;
	GetScriptInterface().Eval("({'type':'netstatus','status':'disconnected'})", msg);
	GetScriptInterface().SetProperty(msg.get(), "reason", (int)reason, false);
	PushGuiMessage(msg);

	SAFE_DELETE(m_Session);

	// Update the state immediately to UNCONNECTED (don't bother with FSM transitions since
	// we'd need one for every single state, and we don't need to use per-state actions)
	SetCurrState(NCS_UNCONNECTED);
}

void CNetClient::SendChatMessage(const std::wstring& text)
{
	CChatMessage chat;
	chat.m_Message = text;
	SendMessage(&chat);
}

bool CNetClient::HandleMessage(CNetMessage* message)
{
	// Handle non-FSM messages first

	Status status = m_Session->GetFileTransferer().HandleMessageReceive(message);
	if (status == INFO::OK)
		return true;
	if (status != INFO::SKIPPED)
		return false;

	if (message->GetType() == NMT_FILE_TRANSFER_REQUEST)
	{
		CFileTransferRequestMessage* reqMessage = (CFileTransferRequestMessage*)message;

		// TODO: we should support different transfer request types, instead of assuming
		// it's always requesting the simulation state

		std::stringstream stream;

		LOGMESSAGERENDER(L"Serializing game at turn %u for rejoining player", m_ClientTurnManager->GetCurrentTurn());
		u32 turn = to_le32(m_ClientTurnManager->GetCurrentTurn());
		stream.write((char*)&turn, sizeof(turn));

		bool ok = m_Game->GetSimulation2()->SerializeState(stream);
		ENSURE(ok);

		// Compress the content with zlib to save bandwidth
		// (TODO: if this is still too large, compressing with e.g. LZMA works much better)
		std::string compressed;
		CompressZLib(stream.str(), compressed, true);

		m_Session->GetFileTransferer().StartResponse(reqMessage->m_RequestID, compressed);

		return true;
	}

	// Update FSM
	bool ok = Update(message->GetType(), message);
	if (!ok)
		LOGERROR(L"Net client: Error running FSM update (type=%d state=%d)", (int)message->GetType(), (int)GetCurrState());
	return ok;
}

void CNetClient::LoadFinished()
{
	if (!m_JoinSyncBuffer.empty())
	{
		// We're rejoining a game, and just finished loading the initial map,
		// so deserialize the saved game state now

		std::string state;
		DecompressZLib(m_JoinSyncBuffer, state, true);

		std::stringstream stream(state);

		u32 turn;
		stream.read((char*)&turn, sizeof(turn));
		turn = to_le32(turn);

		LOGMESSAGE(L"Rejoining client deserializing state at turn %u\n", turn);

		bool ok = m_Game->GetSimulation2()->DeserializeState(stream);
		ENSURE(ok);

		m_ClientTurnManager->ResetState(turn, turn);

		CScriptValRooted msg;
		GetScriptInterface().Eval("({'type':'netstatus','status':'join_syncing'})", msg);
		PushGuiMessage(msg);
	}
	else
	{
		// Connecting at the start of a game, so we'll wait for other players to finish loading
		CScriptValRooted msg;
		GetScriptInterface().Eval("({'type':'netstatus','status':'waiting_for_players'})", msg);
		PushGuiMessage(msg);
	}

	CLoadedGameMessage loaded;
	loaded.m_CurrentTurn = m_ClientTurnManager->GetCurrentTurn();
	SendMessage(&loaded);
}

bool CNetClient::OnConnect(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_CONNECT_COMPLETE);

	CNetClient* client = (CNetClient*)context;

	CScriptValRooted msg;
	client->GetScriptInterface().Eval("({'type':'netstatus','status':'connected'})", msg);
	client->PushGuiMessage(msg);

	return true;
}

bool CNetClient::OnHandshake(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_SERVER_HANDSHAKE);

	CNetClient* client = (CNetClient*)context;

	CCliHandshakeMessage handshake;
	handshake.m_MagicResponse = PS_PROTOCOL_MAGIC_RESPONSE;
	handshake.m_ProtocolVersion = PS_PROTOCOL_VERSION;
	handshake.m_SoftwareVersion = PS_PROTOCOL_VERSION;
	client->SendMessage(&handshake);

	return true;
}

bool CNetClient::OnHandshakeResponse(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_SERVER_HANDSHAKE_RESPONSE);

	CNetClient* client = (CNetClient*)context;

	CAuthenticateMessage authenticate;
	authenticate.m_GUID = client->m_GUID;
	authenticate.m_Name = client->m_UserName;
	authenticate.m_Password = L""; // TODO
	client->SendMessage(&authenticate);

	return true;
}

bool CNetClient::OnAuthenticate(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_AUTHENTICATE_RESULT);

	CNetClient* client = (CNetClient*)context;

	CAuthenticateResultMessage* message = (CAuthenticateResultMessage*)event->GetParamRef();

	LOGMESSAGE(L"Net: Authentication result: host=%u, %ls", message->m_HostID, message->m_Message.c_str());

	bool  isRejoining = (message->m_Code == ARC_OK_REJOINING);

	client->m_HostID = message->m_HostID;

	CScriptValRooted msg;
	client->GetScriptInterface().Eval("({'type':'netstatus','status':'authenticated'})", msg);
	client->GetScriptInterface().SetProperty(msg.get(), "rejoining", isRejoining);
	client->PushGuiMessage(msg);

	return true;
}

bool CNetClient::OnChat(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_CHAT);

	CNetClient* client = (CNetClient*)context;

	CChatMessage* message = (CChatMessage*)event->GetParamRef();

	CScriptValRooted msg;
	client->GetScriptInterface().Eval("({'type':'chat'})", msg);
	client->GetScriptInterface().SetProperty(msg.get(), "guid", std::string(message->m_GUID), false);
	client->GetScriptInterface().SetProperty(msg.get(), "text", std::wstring(message->m_Message), false);
	client->PushGuiMessage(msg);

	return true;
}

bool CNetClient::OnGameSetup(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_GAME_SETUP);

	CNetClient* client = (CNetClient*)context;

	CGameSetupMessage* message = (CGameSetupMessage*)event->GetParamRef();

	client->m_GameAttributes = message->m_Data;

	CScriptValRooted msg;
	client->GetScriptInterface().Eval("({'type':'gamesetup'})", msg);
	client->GetScriptInterface().SetProperty(msg.get(), "data", message->m_Data, false);
	client->PushGuiMessage(msg);

	return true;
}

bool CNetClient::OnPlayerAssignment(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_PLAYER_ASSIGNMENT);

	CNetClient* client = (CNetClient*)context;

	CPlayerAssignmentMessage* message = (CPlayerAssignmentMessage*)event->GetParamRef();

	// Unpack the message
	PlayerAssignmentMap newPlayerAssignments;
	for (size_t i = 0; i < message->m_Hosts.size(); ++i)
	{
		PlayerAssignment assignment;
		assignment.m_Enabled = true;
		assignment.m_Name = message->m_Hosts[i].m_Name;
		assignment.m_PlayerID = message->m_Hosts[i].m_PlayerID;
		newPlayerAssignments[message->m_Hosts[i].m_GUID] = assignment;
	}

	client->m_PlayerAssignments.swap(newPlayerAssignments);

	client->PostPlayerAssignmentsToScript();

	return true;
}

bool CNetClient::OnGameStart(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_GAME_START);

	CNetClient* client = (CNetClient*)context;

	// Find the player assigned to our GUID
	int player = -1;
	if (client->m_PlayerAssignments.find(client->m_GUID) != client->m_PlayerAssignments.end())
		player = client->m_PlayerAssignments[client->m_GUID].m_PlayerID;

	client->m_ClientTurnManager = new CNetClientTurnManager(
			*client->m_Game->GetSimulation2(), *client, client->m_HostID, client->m_Game->GetReplayLogger());

	client->m_Game->SetPlayerID(player);
	client->m_Game->StartGame(client->m_GameAttributes, "");

	CScriptValRooted msg;
	client->GetScriptInterface().Eval("({'type':'start'})", msg);
	client->PushGuiMessage(msg);

	return true;
}

bool CNetClient::OnJoinSyncStart(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_JOIN_SYNC_START);

	CNetClient* client = (CNetClient*)context;

	// The server wants us to start downloading the game state from it, so do so
	client->m_Session->GetFileTransferer().StartTask(
		shared_ptr<CNetFileReceiveTask>(new CNetFileReceiveTask_ClientRejoin(*client))
	);

	return true;
}

bool CNetClient::OnJoinSyncEndCommandBatch(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_END_COMMAND_BATCH);

	CNetClient* client = (CNetClient*)context;

	CEndCommandBatchMessage* endMessage = (CEndCommandBatchMessage*)event->GetParamRef();

	client->m_ClientTurnManager->FinishedAllCommands(endMessage->m_Turn, endMessage->m_TurnLength);

	// Execute all the received commands for the latest turn
	client->m_ClientTurnManager->UpdateFastForward();

	return true;
}

bool CNetClient::OnLoadedGame(void* context, CFsmEvent* event)
{
	ENSURE(event->GetType() == (uint)NMT_LOADED_GAME);

	CNetClient* client = (CNetClient*)context;

	// All players have loaded the game - start running the turn manager
	// so that the game begins
	client->m_Game->SetTurnManager(client->m_ClientTurnManager);

	CScriptValRooted msg;
	client->GetScriptInterface().Eval("({'type':'netstatus','status':'active'})", msg);
	client->PushGuiMessage(msg);

	return true;
}

bool CNetClient::OnInGame(void *context, CFsmEvent* event)
{
	// TODO: should split each of these cases into a separate method

	CNetClient* client = (CNetClient*)context;

	CNetMessage* message = (CNetMessage*)event->GetParamRef();
	if (message)
	{
		if (message->GetType() == NMT_SIMULATION_COMMAND)
		{
			CSimulationMessage* simMessage = static_cast<CSimulationMessage*> (message);
			client->m_ClientTurnManager->OnSimulationMessage(simMessage);
		}
		else if (message->GetType() == NMT_SYNC_ERROR)
		{
			CSyncErrorMessage* syncMessage = static_cast<CSyncErrorMessage*> (message);
			client->m_ClientTurnManager->OnSyncError(syncMessage->m_Turn, syncMessage->m_HashExpected);
		}
		else if (message->GetType() == NMT_END_COMMAND_BATCH)
		{
			CEndCommandBatchMessage* endMessage = static_cast<CEndCommandBatchMessage*> (message);
			client->m_ClientTurnManager->FinishedAllCommands(endMessage->m_Turn, endMessage->m_TurnLength);
		}
	}

	return true;
}
