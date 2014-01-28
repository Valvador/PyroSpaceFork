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

#include "..\..\..\source\lib\tests\test_cache_adt.h"

static TestCache suite_TestCache;

static CxxTest::List Tests_TestCache = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCache( "..\\..\\..\\source\\lib\\tests\\test_cache_adt.h", 28, "TestCache", suite_TestCache, Tests_TestCache );

static class TestDescription_TestCache_test_cache_perf : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCache_test_cache_perf() : CxxTest::RealTestDescription( Tests_TestCache, suiteDescription_TestCache, 31, "test_cache_perf" ) {}
 void runTest() { suite_TestCache.test_cache_perf(); }
} testDescription_TestCache_test_cache_perf;

