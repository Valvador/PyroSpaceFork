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

#include "..\..\..\source\lib\res\graphics\tests\test_tex.h"

static TestTex suite_TestTex;

static CxxTest::List Tests_TestTex = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTex( "..\\..\\..\\source\\lib\\res\\graphics\\tests\\test_tex.h", 29, "TestTex", suite_TestTex, Tests_TestTex );

static class TestDescription_TestTex_test_mipmap_create : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTex_test_mipmap_create() : CxxTest::RealTestDescription( Tests_TestTex, suiteDescription_TestTex, 132, "test_mipmap_create" ) {}
 void runTest() { suite_TestTex.test_mipmap_create(); }
} testDescription_TestTex_test_mipmap_create;

static class TestDescription_TestTex_test_img_size : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTex_test_img_size() : CxxTest::RealTestDescription( Tests_TestTex, suiteDescription_TestTex, 147, "test_img_size" ) {}
 void runTest() { suite_TestTex.test_img_size(); }
} testDescription_TestTex_test_img_size;

static class TestDescription_TestTex_test_s3tc_decode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTex_test_s3tc_decode() : CxxTest::RealTestDescription( Tests_TestTex, suiteDescription_TestTex, 161, "test_s3tc_decode" ) {}
 void runTest() { suite_TestTex.test_s3tc_decode(); }
} testDescription_TestTex_test_s3tc_decode;

