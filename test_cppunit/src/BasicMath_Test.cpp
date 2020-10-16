#include <iostream>
#include <string>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>

#include "CBasicMath.h"
#include "BasicMath_Test.h"

using namespace CppUnit;
using namespace std;


//-----------------------------------------------------------------------------
void BasicMath_Test::setUp(void)
{
    mTestObj = new CBasicMath();
}

void BasicMath_Test::tearDown(void)
{
    delete mTestObj;
}

//-----------------------------------------------------------------------------
void
BasicMath_Test::testAddition(void)
{
    CPPUNIT_ASSERT(5 == mTestObj->Addition(2,3));
}

void
BasicMath_Test::testMultiply(void)
{
    CPPUNIT_ASSERT(6 == mTestObj->Multiply(2,3));
}



