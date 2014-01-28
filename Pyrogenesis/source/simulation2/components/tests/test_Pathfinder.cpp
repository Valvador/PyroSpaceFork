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

#include "..\..\..\source\simulation2\components\tests\test_Pathfinder.h"

static TestCmpPathfinder suite_TestCmpPathfinder;

static CxxTest::List Tests_TestCmpPathfinder = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmpPathfinder( "..\\..\\..\\source\\simulation2\\components\\tests\\test_Pathfinder.h", 31, "TestCmpPathfinder", suite_TestCmpPathfinder, Tests_TestCmpPathfinder );

static class TestDescription_TestCmpPathfinder_test_performance_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmpPathfinder_test_performance_DISABLED() : CxxTest::RealTestDescription( Tests_TestCmpPathfinder, suiteDescription_TestCmpPathfinder, 60, "test_performance_DISABLED" ) {}
 void runTest() { suite_TestCmpPathfinder.test_performance_DISABLED(); }
} testDescription_TestCmpPathfinder_test_performance_DISABLED;

static class TestDescription_TestCmpPathfinder_test_performance_short_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmpPathfinder_test_performance_short_DISABLED() : CxxTest::RealTestDescription( Tests_TestCmpPathfinder, suiteDescription_TestCmpPathfinder, 112, "test_performance_short_DISABLED" ) {}
 void runTest() { suite_TestCmpPathfinder.test_performance_short_DISABLED(); }
} testDescription_TestCmpPathfinder_test_performance_short_DISABLED;

