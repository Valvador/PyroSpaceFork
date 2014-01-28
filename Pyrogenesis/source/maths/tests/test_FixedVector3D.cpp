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

#include "..\..\..\source\maths\tests\test_FixedVector3D.h"

static TestFixedVector3D suite_TestFixedVector3D;

static CxxTest::List Tests_TestFixedVector3D = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFixedVector3D( "..\\..\\..\\source\\maths\\tests\\test_FixedVector3D.h", 32, "TestFixedVector3D", suite_TestFixedVector3D, Tests_TestFixedVector3D );

static class TestDescription_TestFixedVector3D_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector3D_test_basic() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 35, "test_basic" ) {}
 void runTest() { suite_TestFixedVector3D.test_basic(); }
} testDescription_TestFixedVector3D_test_basic;

static class TestDescription_TestFixedVector3D_test_Length : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector3D_test_Length() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 55, "test_Length" ) {}
 void runTest() { suite_TestFixedVector3D.test_Length(); }
} testDescription_TestFixedVector3D_test_Length;

static class TestDescription_TestFixedVector3D_test_Normalize : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector3D_test_Normalize() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 71, "test_Normalize" ) {}
 void runTest() { suite_TestFixedVector3D.test_Normalize(); }
} testDescription_TestFixedVector3D_test_Normalize;

static class TestDescription_TestFixedVector3D_test_NormalizeTo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector3D_test_NormalizeTo() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 94, "test_NormalizeTo" ) {}
 void runTest() { suite_TestFixedVector3D.test_NormalizeTo(); }
} testDescription_TestFixedVector3D_test_NormalizeTo;

static class TestDescription_TestFixedVector3D_test_Cross : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector3D_test_Cross() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 139, "test_Cross" ) {}
 void runTest() { suite_TestFixedVector3D.test_Cross(); }
} testDescription_TestFixedVector3D_test_Cross;

static class TestDescription_TestFixedVector3D_test_Dot : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFixedVector3D_test_Dot() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 147, "test_Dot" ) {}
 void runTest() { suite_TestFixedVector3D.test_Dot(); }
} testDescription_TestFixedVector3D_test_Dot;

