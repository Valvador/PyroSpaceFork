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

#include "..\..\..\source\graphics\tests\test_Color.h"

static TestColor suite_TestColor;

static CxxTest::List Tests_TestColor = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestColor( "..\\..\\..\\source\\graphics\\tests\\test_Color.h", 22, "TestColor", suite_TestColor, Tests_TestColor );

static class TestDescription_TestColor_test_Color4ub : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColor_test_Color4ub() : CxxTest::RealTestDescription( Tests_TestColor, suiteDescription_TestColor, 30, "test_Color4ub" ) {}
 void runTest() { suite_TestColor.test_Color4ub(); }
} testDescription_TestColor_test_Color4ub;

