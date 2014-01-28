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

#include "..\..\..\source\lib\tests\test_path_util.h"

static TestPathUtil suite_TestPathUtil;

static CxxTest::List Tests_TestPathUtil = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPathUtil( "..\\..\\..\\source\\lib\\tests\\test_path_util.h", 36, "TestPathUtil", suite_TestPathUtil, Tests_TestPathUtil );

static class TestDescription_TestPathUtil_test_subpath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPathUtil_test_subpath() : CxxTest::RealTestDescription( Tests_TestPathUtil, suiteDescription_TestPathUtil, 40, "test_subpath" ) {}
 void runTest() { suite_TestPathUtil.test_subpath(); }
} testDescription_TestPathUtil_test_subpath;

static class TestDescription_TestPathUtil_test_name_only : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPathUtil_test_name_only() : CxxTest::RealTestDescription( Tests_TestPathUtil, suiteDescription_TestPathUtil, 63, "test_name_only" ) {}
 void runTest() { suite_TestPathUtil.test_name_only(); }
} testDescription_TestPathUtil_test_name_only;

