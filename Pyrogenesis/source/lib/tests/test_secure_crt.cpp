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

#include "..\..\..\source\lib\tests\test_secure_crt.h"

static TestString_s suite_TestString_s;

static CxxTest::List Tests_TestString_s = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestString_s( "..\\..\\..\\source\\lib\\tests\\test_secure_crt.h", 76, "TestString_s", suite_TestString_s, Tests_TestString_s );

static class TestDescription_TestString_s_test_param_validation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestString_s_test_param_validation() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 170, "test_param_validation" ) {}
 void runTest() { suite_TestString_s.test_param_validation(); }
} testDescription_TestString_s_test_param_validation;

static class TestDescription_TestString_s_test_length : public CxxTest::RealTestDescription {
public:
 TestDescription_TestString_s_test_length() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 237, "test_length" ) {}
 void runTest() { suite_TestString_s.test_length(); }
} testDescription_TestString_s_test_length;

static class TestDescription_TestString_s_test_copy : public CxxTest::RealTestDescription {
public:
 TestDescription_TestString_s_test_copy() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 254, "test_copy" ) {}
 void runTest() { suite_TestString_s.test_copy(); }
} testDescription_TestString_s_test_copy;

static class TestDescription_TestString_s_test_concatenate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestString_s_test_concatenate() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 272, "test_concatenate" ) {}
 void runTest() { suite_TestString_s.test_concatenate(); }
} testDescription_TestString_s_test_concatenate;

static class TestDescription_TestString_s_test_printf : public CxxTest::RealTestDescription {
public:
 TestDescription_TestString_s_test_printf() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 306, "test_printf" ) {}
 void runTest() { suite_TestString_s.test_printf(); }
} testDescription_TestString_s_test_printf;

