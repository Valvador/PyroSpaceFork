/* Copyright (C) 2014 Val Gorbunov val.v.gorbunov@gmail.com
*/

#include "precompiled.h"

#include "ICmp3DUnitMotion.h"

#include "simulation2/system/InterfaceScripted.h"
#include "simulation2/scripting/ScriptComponent.h"

BEGIN_INTERFACE_WRAPPER(3DUnitMotion)
DEFINE_INTERFACE_METHOD_5("MoveToPointRange", bool, ICmp3DUnitMotion, MoveToPointRange, entity_pos_t, entity_pos_t, entity_pos_t, entity_pos_t, entity_pos_t)
DEFINE_INTERFACE_METHOD_5("IsInPointRange", bool, ICmp3DUnitMotion, IsInPointRange, entity_pos_t, entity_pos_t, entity_pos_t, entity_pos_t, entity_pos_t)
DEFINE_INTERFACE_METHOD_3("IsInTargetRange", bool, ICmp3DUnitMotion, IsInTargetRange, entity_id_t, entity_pos_t, entity_pos_t)
DEFINE_INTERFACE_METHOD_3("MoveToTargetRange", bool, ICmp3DUnitMotion, MoveToTargetRange, entity_id_t, entity_pos_t, entity_pos_t)
DEFINE_INTERFACE_METHOD_4("MoveToFormationOffset", void, ICmp3DUnitMotion, MoveToFormationOffset, entity_id_t, entity_pos_t, entity_pos_t, entity_pos_t)
DEFINE_INTERFACE_METHOD_3("FaceTowardsPoint", void, ICmp3DUnitMotion, FaceTowardsPoint, entity_pos_t, entity_pos_t, entity_pos_t)
DEFINE_INTERFACE_METHOD_0("StopMoving", void, ICmp3DUnitMotion, StopMoving)
DEFINE_INTERFACE_METHOD_0("GetCurrentSpeed", fixed, ICmp3DUnitMotion, GetCurrentSpeed)
DEFINE_INTERFACE_METHOD_1("SetSpeed", void, ICmp3DUnitMotion, SetSpeed, fixed)
DEFINE_INTERFACE_METHOD_0("IsMoving", bool, ICmp3DUnitMotion, IsMoving)
DEFINE_INTERFACE_METHOD_0("GetWalkSpeed", fixed, ICmp3DUnitMotion, GetWalkSpeed)
DEFINE_INTERFACE_METHOD_0("GetRunSpeed", fixed, ICmp3DUnitMotion, GetRunSpeed)
DEFINE_INTERFACE_METHOD_1("SetFacePointAfterMove", void, ICmp3DUnitMotion, SetFacePointAfterMove, bool)
DEFINE_INTERFACE_METHOD_1("SetUnitRadius", void, ICmp3DUnitMotion, SetUnitRadius, fixed)
DEFINE_INTERFACE_METHOD_1("SetDebugOverlay", void, ICmp3DUnitMotion, SetDebugOverlay, bool)
END_INTERFACE_WRAPPER(3DUnitMotion)

class CCmp3DUnitMotionScripted : public ICmp3DUnitMotion
{
public:
	DEFAULT_SCRIPT_WRAPPER(3DUnitMotionScripted)

	virtual bool MoveToPointRange(entity_pos_t x, entity_pos_t y, entity_pos_t z, entity_pos_t minRange, entity_pos_t maxRange)
	{
		return m_Script.Call<bool>("MoveToPointRange", x, y, z, minRange, maxRange);
	}

	virtual bool IsInPointRange(entity_pos_t x, entity_pos_t y, entity_pos_t z, entity_pos_t minRange, entity_pos_t maxRange)
	{
		return m_Script.Call<bool>("IsInPointRange", x, y, z, minRange, maxRange);
	}

	virtual bool IsInTargetRange(entity_id_t target, entity_pos_t minRange, entity_pos_t maxRange)
	{
		return m_Script.Call<bool>("IsInTargetRange", target, minRange, maxRange);
	}

	virtual bool MoveToTargetRange(entity_id_t target, entity_pos_t minRange, entity_pos_t maxRange)
	{
		return m_Script.Call<bool>("MoveToTargetRange", target, minRange, maxRange);
	}

	virtual void MoveToFormationOffset(entity_id_t target, entity_pos_t x, entity_pos_t y, entity_pos_t z)
	{
		m_Script.CallVoid("MoveToFormationOffset", target, x, y, z);
	}

	virtual void FaceTowardsPoint(entity_pos_t x, entity_pos_t y, entity_pos_t z)
	{
		m_Script.CallVoid("FaceTowardsPoint", x, y, z);
	}

	virtual void StopMoving()
	{
		m_Script.CallVoid("StopMoving");
	}

	virtual fixed GetCurrentSpeed()
	{
		return m_Script.Call<fixed>("GetCurrentSpeed");
	}

	virtual void SetSpeed(fixed speed)
	{
		m_Script.CallVoid("SetSpeed", speed);
	}

	virtual bool IsMoving()
	{
		return m_Script.Call<bool>("IsMoving");
	}

	virtual fixed GetWalkSpeed()
	{
		return m_Script.Call<fixed>("GetWalkSpeed");
	}

	virtual fixed GetRunSpeed()
	{
		return m_Script.Call<fixed>("GetRunSpeed");
	}

	virtual void SetFacePointAfterMove(bool facePointAfterMove)
	{
		m_Script.CallVoid("SetFacePointAfterMove", facePointAfterMove);
	}

	/*virtual ICmpPathfinder::pass_class_t GetPassabilityClass()
	{
		return m_Script.Call<ICmpPathfinder::pass_class_t>("GetPassabilityClass");
	}*/

	virtual void SetUnitRadius(fixed radius)
	{
		m_Script.CallVoid("SetUnitRadius", radius);
	}

	virtual void SetDebugOverlay(bool enabled)
	{
		m_Script.CallVoid("SetDebugOverlay", enabled);
	}

};

REGISTER_COMPONENT_SCRIPT_WRAPPER(3DUnitMotionScripted)
