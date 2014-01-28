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

#include "..\..\..\source\maths\tests\test_FixedVector2D.h"

static TestFixedVector2D suite_TestFixedVector2D;

static CxxTest::List Tests_TestFixedVector2D = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFixedVector2D( "..\\..\\..\\source\\maths\\tests\\test_FixedVector2D.h", 30, "TestFixedVector2D", suite_TestFixedVector2D, Tests_TestFixedVector2D );

static class TestDescription_TestFixedVector2D_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector2D_test_basic() : CxxTest::RealTestDescription( Tests_TestFixedVector2D, suiteDescription_TestFixedVector2D, 33, "test_basic" ) {}
 void runTest() { suite_TestFixedVector2D.test_basic(); }
} testDescription_TestFixedVector2D_test_basic;

static class TestDescription_TestFixedVector2D_test_Length : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector2D_test_Length() : CxxTest::RealTestDescription( Tests_TestFixedVector2D, suiteDescription_TestFixedVector2D, 53, "test_Length" ) {}
 void runTest() { suite_TestFixedVector2D.test_Length(); }
} testDescription_TestFixedVector2D_test_Length;

static class TestDescription_TestFixedVector2D_test_Normalize : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector2D_test_Normalize() : CxxTest::RealTestDescription( Tests_TestFixedVector2D, suiteDescription_TestFixedVector2D, 69, "test_Normalize" ) {}
 void runTest() { suite_TestFixedVector2D.test_Normalize(); }
} testDescription_TestFixedVector2D_test_Normalize;

static class TestDescription_TestFixedVector2D_test_NormalizeTo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector2D_test_NormalizeTo() : CxxTest::RealTestDescription( Tests_TestFixedVector2D, suiteDescription_TestFixedVector2D, 92, "test_NormalizeTo" ) {}
 void runTest() { suite_TestFixedVector2D.test_NormalizeTo(); }
} testDescription_TestFixedVector2D_test_NormalizeTo;

static class TestDescription_TestFixedVector2D_test_Dot : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector2D_test_Dot() : CxxTest::RealTestDescription( Tests_TestFixedVector2D, suiteDescription_TestFixedVector2D, 137, "test_Dot" ) {}
 void runTest() { suite_TestFixedVector2D.test_Dot(); }
} testDescription_TestFixedVector2D_test_Dot;

