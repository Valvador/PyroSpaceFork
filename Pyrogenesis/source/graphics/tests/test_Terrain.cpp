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

#include "..\..\..\source\graphics\tests\test_Terrain.h"

static TestTerrain suite_TestTerrain;

static CxxTest::List Tests_TestTerrain = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTerrain( "..\\..\\..\\source\\graphics\\tests\\test_Terrain.h", 27, "TestTerrain", suite_TestTerrain, Tests_TestTerrain );

static class TestDescription_TestTerrain_test_GetExactGroundLevel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTerrain_test_GetExactGroundLevel() : CxxTest::RealTestDescription( Tests_TestTerrain, suiteDescription_TestTerrain, 68, "test_GetExactGroundLevel" ) {}
 void runTest() { suite_TestTerrain.test_GetExactGroundLevel(); }
} testDescription_TestTerrain_test_GetExactGroundLevel;

static class TestDescription_TestTerrain_test_GetExactGroundLevelFixed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTerrain_test_GetExactGroundLevelFixed() : CxxTest::RealTestDescription( Tests_TestTerrain, suiteDescription_TestTerrain, 96, "test_GetExactGroundLevelFixed" ) {}
 void runTest() { suite_TestTerrain.test_GetExactGroundLevelFixed(); }
} testDescription_TestTerrain_test_GetExactGroundLevelFixed;

static class TestDescription_TestTerrain_test_GetExactGroundLevelFixed_max : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTerrain_test_GetExactGroundLevelFixed_max() : CxxTest::RealTestDescription( Tests_TestTerrain, suiteDescription_TestTerrain, 126, "test_GetExactGroundLevelFixed_max" ) {}
 void runTest() { suite_TestTerrain.test_GetExactGroundLevelFixed_max(); }
} testDescription_TestTerrain_test_GetExactGroundLevelFixed_max;

static class TestDescription_TestTerrain_test_CalcNormal : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTerrain_test_CalcNormal() : CxxTest::RealTestDescription( Tests_TestTerrain, suiteDescription_TestTerrain, 148, "test_CalcNormal" ) {}
 void runTest() { suite_TestTerrain.test_CalcNormal(); }
} testDescription_TestTerrain_test_CalcNormal;

static class TestDescription_TestTerrain_test_CalcNormalFixed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTerrain_test_CalcNormalFixed() : CxxTest::RealTestDescription( Tests_TestTerrain, suiteDescription_TestTerrain, 172, "test_CalcNormalFixed" ) {}
 void runTest() { suite_TestTerrain.test_CalcNormalFixed(); }
} testDescription_TestTerrain_test_CalcNormalFixed;

