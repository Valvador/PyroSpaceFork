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

#include "..\..\..\source\lib\sysdep\tests\test_sysdep.h"

static TestSysdep suite_TestSysdep;

static CxxTest::List Tests_TestSysdep = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSysdep( "..\\..\\..\\source\\lib\\sysdep\\tests\\test_sysdep.h", 38, "TestSysdep", suite_TestSysdep, Tests_TestSysdep );

static class TestDescription_TestSysdep_test_random : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSysdep_test_random() : CxxTest::RealTestDescription( Tests_TestSysdep, suiteDescription_TestSysdep, 41, "test_random" ) {}
 void runTest() { suite_TestSysdep.test_random(); }
} testDescription_TestSysdep_test_random;

static class TestDescription_TestSysdep_test_sys_ExecutablePathname : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSysdep_test_sys_ExecutablePathname() : CxxTest::RealTestDescription( Tests_TestSysdep, suiteDescription_TestSysdep, 49, "test_sys_ExecutablePathname" ) {}
 void runTest() { suite_TestSysdep.test_sys_ExecutablePathname(); }
} testDescription_TestSysdep_test_sys_ExecutablePathname;

