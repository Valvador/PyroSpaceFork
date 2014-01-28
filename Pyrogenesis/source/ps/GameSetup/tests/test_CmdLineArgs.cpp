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

#include "..\..\..\source\ps\GameSetup\tests\test_CmdLineArgs.h"

static TestCmdLineArgs suite_TestCmdLineArgs;

static CxxTest::List Tests_TestCmdLineArgs = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmdLineArgs( "..\\..\\..\\source\\ps\\GameSetup\\tests\\test_CmdLineArgs.h", 22, "TestCmdLineArgs", suite_TestCmdLineArgs, Tests_TestCmdLineArgs );

static class TestDescription_TestCmdLineArgs_test_has : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmdLineArgs_test_has() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 25, "test_has" ) {}
 void runTest() { suite_TestCmdLineArgs.test_has(); }
} testDescription_TestCmdLineArgs_test_has;

static class TestDescription_TestCmdLineArgs_test_get : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmdLineArgs_test_get() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 35, "test_get" ) {}
 void runTest() { suite_TestCmdLineArgs.test_get(); }
} testDescription_TestCmdLineArgs_test_get;

static class TestDescription_TestCmdLineArgs_test_multiple : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmdLineArgs_test_multiple() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 46, "test_multiple" ) {}
 void runTest() { suite_TestCmdLineArgs.test_multiple(); }
} testDescription_TestCmdLineArgs_test_multiple;

static class TestDescription_TestCmdLineArgs_test_get_invalid : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmdLineArgs_test_get_invalid() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 66, "test_get_invalid" ) {}
 void runTest() { suite_TestCmdLineArgs.test_get_invalid(); }
} testDescription_TestCmdLineArgs_test_get_invalid;

static class TestDescription_TestCmdLineArgs_test_arg0 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCmdLineArgs_test_arg0() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 77, "test_arg0" ) {}
 void runTest() { suite_TestCmdLineArgs.test_arg0(); }
} testDescription_TestCmdLineArgs_test_arg0;

