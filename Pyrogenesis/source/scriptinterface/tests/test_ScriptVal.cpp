/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include "precompiled.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>

#include "..\..\..\source\scriptinterface\tests\test_ScriptVal.h"

static TestScriptVal suite_TestScriptVal;

static CxxTest::List Tests_TestScriptVal = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestScriptVal( "..\\..\\..\\source\\scriptinterface\\tests\\test_ScriptVal.h", 25, "TestScriptVal", suite_TestScriptVal, Tests_TestScriptVal );

static class TestDescription_TestScriptVal_test_rooting : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptVal_test_rooting() : CxxTest::RealTestDescription( Tests_TestScriptVal, suiteDescription_TestScriptVal, 28, "test_rooting" ) {}
 void runTest() { suite_TestScriptVal.test_rooting(); }
} testDescription_TestScriptVal_test_rooting;

