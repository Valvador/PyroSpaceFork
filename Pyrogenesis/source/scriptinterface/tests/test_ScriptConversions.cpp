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

#include "..\..\..\source\scriptinterface\tests\test_ScriptConversions.h"

static TestScriptConversions suite_TestScriptConversions;

static CxxTest::List Tests_TestScriptConversions = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestScriptConversions( "..\\..\\..\\source\\scriptinterface\\tests\\test_ScriptConversions.h", 28, "TestScriptConversions", suite_TestScriptConversions, Tests_TestScriptConversions );

static class TestDescription_TestScriptConversions_test_roundtrip : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptConversions_test_roundtrip() : CxxTest::RealTestDescription( Tests_TestScriptConversions, suiteDescription_TestScriptConversions, 66, "test_roundtrip" ) {}
 void runTest() { suite_TestScriptConversions.test_roundtrip(); }
} testDescription_TestScriptConversions_test_roundtrip;

static class TestDescription_TestScriptConversions_test_integers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptConversions_test_integers() : CxxTest::RealTestDescription( Tests_TestScriptConversions, suiteDescription_TestScriptConversions, 122, "test_integers" ) {}
 void runTest() { suite_TestScriptConversions.test_integers(); }
} testDescription_TestScriptConversions_test_integers;

static class TestDescription_TestScriptConversions_test_nonfinite : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptConversions_test_nonfinite() : CxxTest::RealTestDescription( Tests_TestScriptConversions, suiteDescription_TestScriptConversions, 141, "test_nonfinite" ) {}
 void runTest() { suite_TestScriptConversions.test_nonfinite(); }
} testDescription_TestScriptConversions_test_nonfinite;

static class TestDescription_TestScriptConversions_test_fixed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestScriptConversions_test_fixed() : CxxTest::RealTestDescription( Tests_TestScriptConversions, suiteDescription_TestScriptConversions, 157, "test_fixed" ) {}
 void runTest() { suite_TestScriptConversions.test_fixed(); }
} testDescription_TestScriptConversions_test_fixed;

