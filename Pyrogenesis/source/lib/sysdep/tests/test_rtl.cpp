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

#include "..\..\..\source\lib\sysdep\tests\test_rtl.h"

static Test_rtl suite_Test_rtl;

static CxxTest::List Tests_Test_rtl = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test_rtl( "..\\..\\..\\source\\lib\\sysdep\\tests\\test_rtl.h", 27, "Test_rtl", suite_Test_rtl, Tests_Test_rtl );

static class TestDescription_Test_rtl_test_AllocateAligned : public CxxTest::RealTestDescription {
public:
 TestDescription_Test_rtl_test_AllocateAligned() : CxxTest::RealTestDescription( Tests_Test_rtl, suiteDescription_Test_rtl, 38, "test_AllocateAligned" ) {}
 void runTest() { suite_Test_rtl.test_AllocateAligned(); }
} testDescription_Test_rtl_test_AllocateAligned;

static class TestDescription_Test_rtl_test_FreeAligned_null : public CxxTest::RealTestDescription {
public:
 TestDescription_Test_rtl_test_FreeAligned_null() : CxxTest::RealTestDescription( Tests_Test_rtl, suiteDescription_Test_rtl, 50, "test_FreeAligned_null" ) {}
 void runTest() { suite_Test_rtl.test_FreeAligned_null(); }
} testDescription_Test_rtl_test_FreeAligned_null;

