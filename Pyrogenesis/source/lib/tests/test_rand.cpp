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

#include "..\..\..\source\lib\tests\test_rand.h"

static TestRand suite_TestRand;

static CxxTest::List Tests_TestRand = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRand( "..\\..\\..\\source\\lib\\tests\\test_rand.h", 27, "TestRand", suite_TestRand, Tests_TestRand );

static class TestDescription_TestRand_TestParam : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRand_TestParam() : CxxTest::RealTestDescription( Tests_TestRand, suiteDescription_TestRand, 31, "TestParam" ) {}
 void runTest() { suite_TestRand.TestParam(); }
} testDescription_TestRand_TestParam;

static class TestDescription_TestRand_TestReturnedRange : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRand_TestReturnedRange() : CxxTest::RealTestDescription( Tests_TestRand, suiteDescription_TestRand, 41, "TestReturnedRange" ) {}
 void runTest() { suite_TestRand.TestReturnedRange(); }
} testDescription_TestRand_TestReturnedRange;

static class TestDescription_TestRand_TestTwoValues : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRand_TestTwoValues() : CxxTest::RealTestDescription( Tests_TestRand, suiteDescription_TestRand, 52, "TestTwoValues" ) {}
 void runTest() { suite_TestRand.TestTwoValues(); }
} testDescription_TestRand_TestTwoValues;

