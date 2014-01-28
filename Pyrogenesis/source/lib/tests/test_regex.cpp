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

#include "..\..\..\source\lib\tests\test_regex.h"

static TestRegex suite_TestRegex;

static CxxTest::List Tests_TestRegex = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRegex( "..\\..\\..\\source\\lib\\tests\\test_regex.h", 27, "TestRegex", suite_TestRegex, Tests_TestRegex );

static class TestDescription_TestRegex_test_regex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRegex_test_regex() : CxxTest::RealTestDescription( Tests_TestRegex, suiteDescription_TestRegex, 30, "test_regex" ) {}
 void runTest() { suite_TestRegex.test_regex(); }
} testDescription_TestRegex_test_regex;

