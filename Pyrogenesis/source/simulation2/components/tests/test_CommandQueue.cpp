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

#include "..\..\..\source\simulation2\components\tests\test_CommandQueue.h"

static TestCmpCommandQueue suite_TestCmpCommandQueue;

static CxxTest::List Tests_TestCmpCommandQueue = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmpCommandQueue( "..\\..\\..\\source\\simulation2\\components\\tests\\test_CommandQueue.h", 22, "TestCmpCommandQueue", suite_TestCmpCommandQueue, Tests_TestCmpCommandQueue );

static class TestDescription_TestCmpCommandQueue_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmpCommandQueue_test_basic() : CxxTest::RealTestDescription( Tests_TestCmpCommandQueue, suiteDescription_TestCmpCommandQueue, 35, "test_basic" ) {}
 void runTest() { suite_TestCmpCommandQueue.test_basic(); }
} testDescription_TestCmpCommandQueue_test_basic;

