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

#include "..\..\..\source\ps\XML\tests\test_Xeromyces.h"

static TestXeromyces suite_TestXeromyces;

static CxxTest::List Tests_TestXeromyces = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestXeromyces( "..\\..\\..\\source\\ps\\XML\\tests\\test_Xeromyces.h", 24, "TestXeromyces", suite_TestXeromyces, Tests_TestXeromyces );

static class TestDescription_TestXeromyces_test_LoadString : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXeromyces_test_LoadString() : CxxTest::RealTestDescription( Tests_TestXeromyces, suiteDescription_TestXeromyces, 40, "test_LoadString" ) {}
 void runTest() { suite_TestXeromyces.test_LoadString(); }
} testDescription_TestXeromyces_test_LoadString;

static class TestDescription_TestXeromyces_test_LoadString_invalid : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXeromyces_test_LoadString_invalid() : CxxTest::RealTestDescription( Tests_TestXeromyces, suiteDescription_TestXeromyces, 47, "test_LoadString_invalid" ) {}
 void runTest() { suite_TestXeromyces.test_LoadString_invalid(); }
} testDescription_TestXeromyces_test_LoadString_invalid;

