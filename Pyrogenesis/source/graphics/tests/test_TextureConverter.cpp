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

#include "..\..\..\source\graphics\tests\test_TextureConverter.h"

static TestTextureConverter suite_TestTextureConverter;

static CxxTest::List Tests_TestTextureConverter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTextureConverter( "..\\..\\..\\source\\graphics\\tests\\test_TextureConverter.h", 28, "TestTextureConverter", suite_TestTextureConverter, Tests_TestTextureConverter );

static class TestDescription_TestTextureConverter_test_convert_quality : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTextureConverter_test_convert_quality() : CxxTest::RealTestDescription( Tests_TestTextureConverter, suiteDescription_TestTextureConverter, 53, "test_convert_quality" ) {}
 void runTest() { suite_TestTextureConverter.test_convert_quality(); }
} testDescription_TestTextureConverter_test_convert_quality;

