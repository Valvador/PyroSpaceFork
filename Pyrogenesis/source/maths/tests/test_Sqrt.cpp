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

#include "..\..\..\source\maths\tests\test_Sqrt.h"

static TestSqrt suite_TestSqrt;

static CxxTest::List Tests_TestSqrt = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSqrt( "..\\..\\..\\source\\maths\\tests\\test_Sqrt.h", 26, "TestSqrt", suite_TestSqrt, Tests_TestSqrt );

static class TestDescription_TestSqrt_test_sqrt : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSqrt_test_sqrt() : CxxTest::RealTestDescription( Tests_TestSqrt, suiteDescription_TestSqrt, 39, "test_sqrt" ) {}
 void runTest() { suite_TestSqrt.test_sqrt(); }
} testDescription_TestSqrt_test_sqrt;

static class TestDescription_TestSqrt_test_random : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSqrt_test_random() : CxxTest::RealTestDescription( Tests_TestSqrt, suiteDescription_TestSqrt, 73, "test_random" ) {}
 void runTest() { suite_TestSqrt.test_random(); }
} testDescription_TestSqrt_test_random;

