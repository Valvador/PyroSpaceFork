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

#include "..\..\..\source\ps\XML\tests\test_RelaxNG.h"

static TestRelaxNG suite_TestRelaxNG;

static CxxTest::List Tests_TestRelaxNG = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRelaxNG( "..\\..\\..\\source\\ps\\XML\\tests\\test_RelaxNG.h", 24, "TestRelaxNG", suite_TestRelaxNG, Tests_TestRelaxNG );

static class TestDescription_TestRelaxNG_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRelaxNG_test_basic() : CxxTest::RealTestDescription( Tests_TestRelaxNG, suiteDescription_TestRelaxNG, 37, "test_basic" ) {}
 void runTest() { suite_TestRelaxNG.test_basic(); }
} testDescription_TestRelaxNG_test_basic;

static class TestDescription_TestRelaxNG_test_interleave : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRelaxNG_test_interleave() : CxxTest::RealTestDescription( Tests_TestRelaxNG, suiteDescription_TestRelaxNG, 59, "test_interleave" ) {}
 void runTest() { suite_TestRelaxNG.test_interleave(); }
} testDescription_TestRelaxNG_test_interleave;

static class TestDescription_TestRelaxNG_test_datatypes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRelaxNG_test_datatypes() : CxxTest::RealTestDescription( Tests_TestRelaxNG, suiteDescription_TestRelaxNG, 66, "test_datatypes" ) {}
 void runTest() { suite_TestRelaxNG.test_datatypes(); }
} testDescription_TestRelaxNG_test_datatypes;

static class TestDescription_TestRelaxNG_test_broken_grammar : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRelaxNG_test_broken_grammar() : CxxTest::RealTestDescription( Tests_TestRelaxNG, suiteDescription_TestRelaxNG, 79, "test_broken_grammar" ) {}
 void runTest() { suite_TestRelaxNG.test_broken_grammar(); }
} testDescription_TestRelaxNG_test_broken_grammar;

