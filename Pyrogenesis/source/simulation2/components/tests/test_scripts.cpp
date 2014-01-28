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

#include "..\..\..\source\simulation2\components\tests\test_scripts.h"

static TestComponentScripts suite_TestComponentScripts;

static CxxTest::List Tests_TestComponentScripts = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestComponentScripts( "..\\..\\..\\source\\simulation2\\components\\tests\\test_scripts.h", 22, "TestComponentScripts", suite_TestComponentScripts, Tests_TestComponentScripts );

static class TestDescription_TestComponentScripts_test_scripts : public CxxTest::RealTestDescription {
public:
 TestDescription_TestComponentScripts_test_scripts() : CxxTest::RealTestDescription( Tests_TestComponentScripts, suiteDescription_TestComponentScripts, 58, "test_scripts" ) {}
 void runTest() { suite_TestComponentScripts.test_scripts(); }
} testDescription_TestComponentScripts_test_scripts;

