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

#include "..\..\..\source\ps\tests\test_Parser.h"

static TestParser suite_TestParser;

static CxxTest::List Tests_TestParser = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestParser( "..\\..\\..\\source\\ps\\tests\\test_Parser.h", 22, "TestParser", suite_TestParser, Tests_TestParser );

static class TestDescription_TestParser_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParser_test_basic() : CxxTest::RealTestDescription( Tests_TestParser, suiteDescription_TestParser, 25, "test_basic" ) {}
 void runTest() { suite_TestParser.test_basic(); }
} testDescription_TestParser_test_basic;

static class TestDescription_TestParser_test_hotkey : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParser_test_hotkey() : CxxTest::RealTestDescription( Tests_TestParser, suiteDescription_TestParser, 41, "test_hotkey" ) {}
 void runTest() { suite_TestParser.test_hotkey(); }
} testDescription_TestParser_test_hotkey;

static class TestDescription_TestParser_test_optional : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParser_test_optional() : CxxTest::RealTestDescription( Tests_TestParser, suiteDescription_TestParser, 64, "test_optional" ) {}
 void runTest() { suite_TestParser.test_optional(); }
} testDescription_TestParser_test_optional;

static class TestDescription_TestParser_test_multi_optional : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParser_test_multi_optional() : CxxTest::RealTestDescription( Tests_TestParser, suiteDescription_TestParser, 86, "test_multi_optional" ) {}
 void runTest() { suite_TestParser.test_multi_optional(); }
} testDescription_TestParser_test_multi_optional;

static class TestDescription_TestParser_test_optional_repeat : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParser_test_optional_repeat() : CxxTest::RealTestDescription( Tests_TestParser, suiteDescription_TestParser, 115, "test_optional_repeat" ) {}
 void runTest() { suite_TestParser.test_optional_repeat(); }
} testDescription_TestParser_test_optional_repeat;

static class TestDescription_TestParser_test_rest : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParser_test_rest() : CxxTest::RealTestDescription( Tests_TestParser, suiteDescription_TestParser, 135, "test_rest" ) {}
 void runTest() { suite_TestParser.test_rest(); }
} testDescription_TestParser_test_rest;

