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

#include "..\..\..\source\lib\file\vfs\tests\test_vfs_tree.h"

static TestVfsTree suite_TestVfsTree;

static CxxTest::List Tests_TestVfsTree = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVfsTree( "..\\..\\..\\source\\lib\\file\\vfs\\tests\\test_vfs_tree.h", 44, "TestVfsTree", suite_TestVfsTree, Tests_TestVfsTree );

static class TestDescription_TestVfsTree_test_replacement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVfsTree_test_replacement() : CxxTest::RealTestDescription( Tests_TestVfsTree, suiteDescription_TestVfsTree, 47, "test_replacement" ) {}
 void runTest() { suite_TestVfsTree.test_replacement(); }
} testDescription_TestVfsTree_test_replacement;

