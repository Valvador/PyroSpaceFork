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

#include "..\..\..\source\simulation2\components\tests\test_Position.h"

static TestCmpPosition suite_TestCmpPosition;

static CxxTest::List Tests_TestCmpPosition = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmpPosition( "..\\..\\..\\source\\simulation2\\components\\tests\\test_Position.h", 22, "TestCmpPosition", suite_TestCmpPosition, Tests_TestCmpPosition );

static class TestDescription_TestCmpPosition_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmpPosition_test_basic() : CxxTest::RealTestDescription( Tests_TestCmpPosition, suiteDescription_TestCmpPosition, 40, "test_basic" ) {}
 void runTest() { suite_TestCmpPosition.test_basic(); }
} testDescription_TestCmpPosition_test_basic;

static class TestDescription_TestCmpPosition_test_serialize : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmpPosition_test_serialize() : CxxTest::RealTestDescription( Tests_TestCmpPosition, suiteDescription_TestCmpPosition, 112, "test_serialize" ) {}
 void runTest() { suite_TestCmpPosition.test_serialize(); }
} testDescription_TestCmpPosition_test_serialize;

