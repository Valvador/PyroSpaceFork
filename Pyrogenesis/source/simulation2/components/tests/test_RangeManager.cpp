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

#include "..\..\..\source\simulation2\components\tests\test_RangeManager.h"

static TestCmpRangeManager suite_TestCmpRangeManager;

static CxxTest::List Tests_TestCmpRangeManager = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmpRangeManager( "..\\..\\..\\source\\simulation2\\components\\tests\\test_RangeManager.h", 65, "TestCmpRangeManager", suite_TestCmpRangeManager, Tests_TestCmpRangeManager );

static class TestDescription_TestCmpRangeManager_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmpRangeManager_test_basic() : CxxTest::RealTestDescription( Tests_TestCmpRangeManager, suiteDescription_TestCmpRangeManager, 78, "test_basic" ) {}
 void runTest() { suite_TestCmpRangeManager.test_basic(); }
} testDescription_TestCmpRangeManager_test_basic;

