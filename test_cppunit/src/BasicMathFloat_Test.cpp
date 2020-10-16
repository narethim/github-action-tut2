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

#include "CBasicMathFloat.h"
#include "BasicMathFloat_Test.h"

using namespace CppUnit;
using namespace std;


//-----------------------------------------------------------------------------
void BasicMathFloat_Test::setUp(void)
{
    mTestObj2 = new CBasicMathFloat();
}

void BasicMathFloat_Test::tearDown(void)
{
    delete mTestObj2;
}

//-----------------------------------------------------------------------------
void
BasicMathFloat_Test::testAddition(void)
{
    CPPUNIT_ASSERT(5.0 == mTestObj2->Addition(2.0,3.0));
}

void
BasicMathFloat_Test::testMultiply(void)
{
    CPPUNIT_ASSERT(6.0 == mTestObj2->Multiply(2.0,3.0));
}

void
BasicMathFloat_Test::testSubstraction(void)
{
    CPPUNIT_ASSERT(5.0 == mTestObj2->Substraction(10.0,5.0));
}

void
BasicMathFloat_Test::testDivide(void)
{
    CPPUNIT_ASSERT(4.0 == mTestObj2->Divide(12.0,3.0));
}


