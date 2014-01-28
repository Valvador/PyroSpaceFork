/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include "precompiled.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>

#include "..\..\..\source\graphics\tests\test_TextureManager.h"

static TestTextureManager suite_TestTextureManager;

static CxxTest::List Tests_TestTextureManager = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTextureManager( "..\\..\\..\\source\\graphics\\tests\\test_TextureManager.h", 29, "TestTextureManager", suite_TestTextureManager, Tests_TestTextureManager );

static class TestDescription_TestTextureManager_test_load_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTextureManager_test_load_basic() : CxxTest::RealTestDescription( Tests_TestTextureManager, suiteDescription_TestTextureManager, 60, "test_load_basic" ) {}
 void runTest() { suite_TestTextureManager.test_load_basic(); }
} testDescription_TestTextureManager_test_load_basic;

static class TestDescription_TestTextureManager_test_load_formats : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTextureManager_test_load_formats() : CxxTest::RealTestDescription( Tests_TestTextureManager, suiteDescription_TestTextureManager, 104, "test_load_formats" ) {}
 void runTest() { suite_TestTextureManager.test_load_formats(); }
} testDescription_TestTextureManager_test_load_formats;

