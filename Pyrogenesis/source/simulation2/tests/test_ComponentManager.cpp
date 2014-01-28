/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include "precompiled.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>

#include "..\..\..\source\simulation2\tests\test_ComponentManager.h"

static TestComponentManager suite_TestComponentManager;

static CxxTest::List Tests_TestComponentManager = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestComponentManager( "..\\..\\..\\source\\simulation2\\tests\\test_ComponentManager.h", 41, "TestComponentManager", suite_TestComponentManager, Tests_TestComponentManager );

static class TestDescription_TestComponentManager_test_Load : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_Load() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 59, "test_Load" ) {}
 void runTest() { suite_TestComponentManager.test_Load(); }
} testDescription_TestComponentManager_test_Load;

static class TestDescription_TestComponentManager_test_LookupCID : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_LookupCID() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 66, "test_LookupCID" ) {}
 void runTest() { suite_TestComponentManager.test_LookupCID(); }
} testDescription_TestComponentManager_test_LookupCID;

static class TestDescription_TestComponentManager_test_AllocateNewEntity : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_AllocateNewEntity() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 76, "test_AllocateNewEntity" ) {}
 void runTest() { suite_TestComponentManager.test_AllocateNewEntity(); }
} testDescription_TestComponentManager_test_AllocateNewEntity;

static class TestDescription_TestComponentManager_test_AddComponent_errors : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_AddComponent_errors() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 99, "test_AddComponent_errors" ) {}
 void runTest() { suite_TestComponentManager.test_AddComponent_errors(); }
} testDescription_TestComponentManager_test_AddComponent_errors;

static class TestDescription_TestComponentManager_test_QueryInterface : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_QueryInterface() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 122, "test_QueryInterface" ) {}
 void runTest() { suite_TestComponentManager.test_QueryInterface(); }
} testDescription_TestComponentManager_test_QueryInterface;

static class TestDescription_TestComponentManager_test_SendMessage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_SendMessage() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 147, "test_SendMessage" ) {}
 void runTest() { suite_TestComponentManager.test_SendMessage(); }
} testDescription_TestComponentManager_test_SendMessage;

static class TestDescription_TestComponentManager_test_ParamNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_ParamNode() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 221, "test_ParamNode" ) {}
 void runTest() { suite_TestComponentManager.test_ParamNode(); }
} testDescription_TestComponentManager_test_ParamNode;

static class TestDescription_TestComponentManager_test_script_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_basic() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 242, "test_script_basic" ) {}
 void runTest() { suite_TestComponentManager.test_script_basic(); }
} testDescription_TestComponentManager_test_script_basic;

static class TestDescription_TestComponentManager_test_script_helper_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_helper_basic() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 286, "test_script_helper_basic" ) {}
 void runTest() { suite_TestComponentManager.test_script_helper_basic(); }
} testDescription_TestComponentManager_test_script_helper_basic;

static class TestDescription_TestComponentManager_test_script_global_helper : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_global_helper() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 303, "test_script_global_helper" ) {}
 void runTest() { suite_TestComponentManager.test_script_global_helper(); }
} testDescription_TestComponentManager_test_script_global_helper;

static class TestDescription_TestComponentManager_test_script_interface : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_interface() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 319, "test_script_interface" ) {}
 void runTest() { suite_TestComponentManager.test_script_interface(); }
} testDescription_TestComponentManager_test_script_interface;

static class TestDescription_TestComponentManager_test_script_errors : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_errors() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 337, "test_script_errors" ) {}
 void runTest() { suite_TestComponentManager.test_script_errors(); }
} testDescription_TestComponentManager_test_script_errors;

static class TestDescription_TestComponentManager_test_script_entityID : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_entityID() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 354, "test_script_entityID" ) {}
 void runTest() { suite_TestComponentManager.test_script_entityID(); }
} testDescription_TestComponentManager_test_script_entityID;

static class TestDescription_TestComponentManager_test_script_QueryInterface : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_QueryInterface() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 374, "test_script_QueryInterface" ) {}
 void runTest() { suite_TestComponentManager.test_script_QueryInterface(); }
} testDescription_TestComponentManager_test_script_QueryInterface;

static class TestDescription_TestComponentManager_test_script_AddEntity : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_AddEntity() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 395, "test_script_AddEntity" ) {}
 void runTest() { suite_TestComponentManager.test_script_AddEntity(); }
} testDescription_TestComponentManager_test_script_AddEntity;

static class TestDescription_TestComponentManager_test_script_AddLocalEntity : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_AddLocalEntity() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 428, "test_script_AddLocalEntity" ) {}
 void runTest() { suite_TestComponentManager.test_script_AddLocalEntity(); }
} testDescription_TestComponentManager_test_script_AddLocalEntity;

static class TestDescription_TestComponentManager_test_script_DestroyEntity : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_DestroyEntity() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 461, "test_script_DestroyEntity" ) {}
 void runTest() { suite_TestComponentManager.test_script_DestroyEntity(); }
} testDescription_TestComponentManager_test_script_DestroyEntity;

static class TestDescription_TestComponentManager_test_script_messages : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_messages() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 481, "test_script_messages" ) {}
 void runTest() { suite_TestComponentManager.test_script_messages(); }
} testDescription_TestComponentManager_test_script_messages;

static class TestDescription_TestComponentManager_test_script_template : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_template() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 514, "test_script_template" ) {}
 void runTest() { suite_TestComponentManager.test_script_template(); }
} testDescription_TestComponentManager_test_script_template;

static class TestDescription_TestComponentManager_test_script_template_readonly : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_template_readonly() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 536, "test_script_template_readonly" ) {}
 void runTest() { suite_TestComponentManager.test_script_template_readonly(); }
} testDescription_TestComponentManager_test_script_template_readonly;

static class TestDescription_TestComponentManager_test_script_hotload : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_hotload() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 558, "test_script_hotload" ) {}
 void runTest() { suite_TestComponentManager.test_script_hotload(); }
} testDescription_TestComponentManager_test_script_hotload;

static class TestDescription_TestComponentManager_test_serialization : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_serialization() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 594, "test_serialization" ) {}
 void runTest() { suite_TestComponentManager.test_serialization(); }
} testDescription_TestComponentManager_test_serialization;

static class TestDescription_TestComponentManager_test_script_serialization : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_serialization() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 683, "test_script_serialization" ) {}
 void runTest() { suite_TestComponentManager.test_script_serialization(); }
} testDescription_TestComponentManager_test_script_serialization;

static class TestDescription_TestComponentManager_test_script_serialization_errors : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_serialization_errors() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 771, "test_script_serialization_errors" ) {}
 void runTest() { suite_TestComponentManager.test_script_serialization_errors(); }
} testDescription_TestComponentManager_test_script_serialization_errors;

static class TestDescription_TestComponentManager_test_script_serialization_template : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentManager_test_script_serialization_template() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 789, "test_script_serialization_template" ) {}
 void runTest() { suite_TestComponentManager.test_script_serialization_template(); }
} testDescription_TestComponentManager_test_script_serialization_template;

