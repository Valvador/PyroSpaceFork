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

#include "..\..\..\source\scriptinterface\tests\test_ScriptInterface.h"

static TestScriptInterface suite_TestScriptInterface;

static CxxTest::List Tests_TestScriptInterface = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestScriptInterface( "..\\..\\..\\source\\scriptinterface\\tests\\test_ScriptInterface.h", 26, "TestScriptInterface", suite_TestScriptInterface, Tests_TestScriptInterface );

static class TestDescription_TestScriptInterface_test_loadscript_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptInterface_test_loadscript_basic() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 29, "test_loadscript_basic" ) {}
 void runTest() { suite_TestScriptInterface.test_loadscript_basic(); }
} testDescription_TestScriptInterface_test_loadscript_basic;

static class TestDescription_TestScriptInterface_test_loadscript_error : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptInterface_test_loadscript_error() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 38, "test_loadscript_error" ) {}
 void runTest() { suite_TestScriptInterface.test_loadscript_error(); }
} testDescription_TestScriptInterface_test_loadscript_error;

static class TestDescription_TestScriptInterface_test_loadscript_strict_warning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptInterface_test_loadscript_strict_warning() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 46, "test_loadscript_strict_warning" ) {}
 void runTest() { suite_TestScriptInterface.test_loadscript_strict_warning(); }
} testDescription_TestScriptInterface_test_loadscript_strict_warning;

static class TestDescription_TestScriptInterface_test_loadscript_strict_error : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptInterface_test_loadscript_strict_error() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 54, "test_loadscript_strict_error" ) {}
 void runTest() { suite_TestScriptInterface.test_loadscript_strict_error(); }
} testDescription_TestScriptInterface_test_loadscript_strict_error;

static class TestDescription_TestScriptInterface_test_clone_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptInterface_test_clone_basic() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 62, "test_clone_basic" ) {}
 void runTest() { suite_TestScriptInterface.test_clone_basic(); }
} testDescription_TestScriptInterface_test_clone_basic;

static class TestDescription_TestScriptInterface_test_clone_getters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptInterface_test_clone_getters() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 77, "test_clone_getters" ) {}
 void runTest() { suite_TestScriptInterface.test_clone_getters(); }
} testDescription_TestScriptInterface_test_clone_getters;

static class TestDescription_TestScriptInterface_test_clone_cyclic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptInterface_test_clone_cyclic() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 94, "test_clone_cyclic" ) {}
 void runTest() { suite_TestScriptInterface.test_clone_cyclic(); }
} testDescription_TestScriptInterface_test_clone_cyclic;

static class TestDescription_TestScriptInterface_test_random : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptInterface_test_random() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 109, "test_random" ) {}
 void runTest() { suite_TestScriptInterface.test_random(); }
} testDescription_TestScriptInterface_test_random;

static class TestDescription_TestScriptInterface_test_json : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptInterface_test_json() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 129, "test_json" ) {}
 void runTest() { suite_TestScriptInterface.test_json(); }
} testDescription_TestScriptInterface_test_json;

