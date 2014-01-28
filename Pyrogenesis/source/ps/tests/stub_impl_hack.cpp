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

#include "..\..\..\source\ps\tests\stub_impl_hack.h"

static TestDummy suite_TestDummy;

static CxxTest::List Tests_TestDummy = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDummy( "..\\..\\..\\source\\ps\\tests\\stub_impl_hack.h", 31, "TestDummy", suite_TestDummy, Tests_TestDummy );

static class TestDescription_TestDummy_test_dummy : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDummy_test_dummy() : CxxTest::RealTestDescription( Tests_TestDummy, suiteDescription_TestDummy, 34, "test_dummy" ) {}
 void runTest() { suite_TestDummy.test_dummy(); }
} testDescription_TestDummy_test_dummy;

