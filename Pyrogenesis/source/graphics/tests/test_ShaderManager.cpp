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

#include "..\..\..\source\graphics\tests\test_ShaderManager.h"

static TestShaderManager suite_TestShaderManager;

static CxxTest::List Tests_TestShaderManager = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestShaderManager( "..\\..\\..\\source\\graphics\\tests\\test_ShaderManager.h", 24, "TestShaderManager", suite_TestShaderManager, Tests_TestShaderManager );

static class TestDescription_TestShaderManager_test_defines : public CxxTest::RealTestDescription {
public:
 TestDescription_TestShaderManager_test_defines() : CxxTest::RealTestDescription( Tests_TestShaderManager, suiteDescription_TestShaderManager, 27, "test_defines" ) {}
 void runTest() { suite_TestShaderManager.test_defines(); }
} testDescription_TestShaderManager_test_defines;

static class TestDescription_TestShaderManager_test_defines_order : public CxxTest::RealTestDescription {
public:
 TestDescription_TestShaderManager_test_defines_order() : CxxTest::RealTestDescription( Tests_TestShaderManager, suiteDescription_TestShaderManager, 64, "test_defines_order" ) {}
 void runTest() { suite_TestShaderManager.test_defines_order(); }
} testDescription_TestShaderManager_test_defines_order;

static class TestDescription_TestShaderManager_test_uniforms : public CxxTest::RealTestDescription {
public:
 TestDescription_TestShaderManager_test_uniforms() : CxxTest::RealTestDescription( Tests_TestShaderManager, suiteDescription_TestShaderManager, 92, "test_uniforms" ) {}
 void runTest() { suite_TestShaderManager.test_uniforms(); }
} testDescription_TestShaderManager_test_uniforms;

