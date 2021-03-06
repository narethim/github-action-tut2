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

using namespace CppUnit;
using namespace std;

//-----------------------------------------------------------------------------

class BasicMathFloat_Test : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(BasicMathFloat_Test);
    
    CPPUNIT_TEST(testAddition);
    CPPUNIT_TEST(testMultiply);
    CPPUNIT_TEST(testSubstraction);
    CPPUNIT_TEST(testDivide);
    
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp(void);
    void tearDown(void);

protected:
    void testAddition(void);
    void testMultiply(void);
    void testSubstraction(void);
    void testDivide(void);

private:

    CBasicMathFloat *mTestObj2;
};


