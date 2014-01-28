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

#include "..\..\..\source\lib\posix\tests\test_posix.h"

static TestPosix suite_TestPosix;

static CxxTest::List Tests_TestPosix = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPosix( "..\\..\\..\\source\\lib\\posix\\tests\\test_posix.h", 27, "TestPosix", suite_TestPosix, Tests_TestPosix );

static class TestDescription_TestPosix_test_wcsdup : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPosix_test_wcsdup() : CxxTest::RealTestDescription( Tests_TestPosix, suiteDescription_TestPosix, 30, "test_wcsdup" ) {}
 void runTest() { suite_TestPosix.test_wcsdup(); }
} testDescription_TestPosix_test_wcsdup;

