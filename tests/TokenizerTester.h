/*
 * File:   TokenizerTester.h
 * Author: Matthew Wolff
 *
 * Created on Oct 21, 2015, 11:25:50 PM
 */

#ifndef TOKENIZERTESTER_H
#define	TOKENIZERTESTER_H

#include <cppunit/extensions/HelperMacros.h>

class TokenizerTester : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TokenizerTester);

    CPPUNIT_TEST(testGetNextToken);

    CPPUNIT_TEST_SUITE_END();

public:
    TokenizerTester();
    virtual ~TokenizerTester();
    void setUp();
    void tearDown();

private:
    void testGetNextToken();

};

#endif	/* TOKENIZERTESTER_H */

