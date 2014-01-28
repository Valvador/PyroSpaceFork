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

#include "..\..\..\source\lib\sysdep\tests\test_printf.h"

static TestPrintf suite_TestPrintf;

static CxxTest::List Tests_TestPrintf = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPrintf( "..\\..\\..\\source\\lib\\sysdep\\tests\\test_printf.h", 27, "TestPrintf", suite_TestPrintf, Tests_TestPrintf );

static class TestDescription_TestPrintf_test_truncate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPrintf_test_truncate() : CxxTest::RealTestDescription( Tests_TestPrintf, suiteDescription_TestPrintf, 64, "test_truncate" ) {}
 void runTest() { suite_TestPrintf.test_truncate(); }
} testDescription_TestPrintf_test_truncate;

static class TestDescription_TestPrintf_test_lld : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPrintf_test_lld() : CxxTest::RealTestDescription( Tests_TestPrintf, suiteDescription_TestPrintf, 76, "test_lld" ) {}
 void runTest() { suite_TestPrintf.test_lld(); }
} testDescription_TestPrintf_test_lld;

static class TestDescription_TestPrintf_test_pos : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPrintf_test_pos() : CxxTest::RealTestDescription( Tests_TestPrintf, suiteDescription_TestPrintf, 88, "test_pos" ) {}
 void runTest() { suite_TestPrintf.test_pos(); }
} testDescription_TestPrintf_test_pos;

static class TestDescription_TestPrintf_test_pos_lld : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPrintf_test_pos_lld() : CxxTest::RealTestDescription( Tests_TestPrintf, suiteDescription_TestPrintf, 94, "test_pos_lld" ) {}
 void runTest() { suite_TestPrintf.test_pos_lld(); }
} testDescription_TestPrintf_test_pos_lld;

