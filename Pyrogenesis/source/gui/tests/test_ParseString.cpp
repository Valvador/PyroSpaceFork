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

#include "..\..\..\source\gui\tests\test_ParseString.h"

static TestGuiParseString suite_TestGuiParseString;

static CxxTest::List Tests_TestGuiParseString = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGuiParseString( "..\\..\\..\\source\\gui\\tests\\test_ParseString.h", 22, "TestGuiParseString", suite_TestGuiParseString, Tests_TestGuiParseString );

static class TestDescription_TestGuiParseString_test_clientarea : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGuiParseString_test_clientarea() : CxxTest::RealTestDescription( Tests_TestGuiParseString, suiteDescription_TestGuiParseString, 25, "test_clientarea" ) {}
 void runTest() { suite_TestGuiParseString.test_clientarea(); }
} testDescription_TestGuiParseString_test_clientarea;

