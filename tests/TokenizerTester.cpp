/*
 * File:   TokenizerTester.cpp
 * Author: Matthew Wolff
 *
 * Created on Oct 21, 2015, 11:25:50 PM
 */

#include "TokenizerTester.h"
#include "../Tokens/Tokenizer.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TokenizerTester);

TokenizerTester::TokenizerTester() {
}

TokenizerTester::~TokenizerTester() {
}

void TokenizerTester::setUp() {
}

void TokenizerTester::tearDown() {
}

void TokenizerTester::testGetNextToken() {
    Tokenizer* tokenizer = new Tokenizer(new std::stringstream("{\"test\":-123.456e2, \"otherString\":true}"));
    Token* result = tokenizer->getNextToken();
    if (result->getType() != LBRACE)
        CPPUNIT_ASSERT(false);
    result = tokenizer->getNextToken();
    if(result->getType() != STRING)
        CPPUNIT_ASSERT(false);
    if(result->getString() != "test")
        CPPUNIT_ASSERT(false);
    result = tokenizer->getNextToken();
    if(result->getType() != COLON)
        CPPUNIT_ASSERT(false);
    result = tokenizer->getNextToken();
    if(result->getType() != NUMBER) 
        CPPUNIT_ASSERT(false);
    if(result->getNumber() != -12345.6)
        CPPUNIT_ASSERT(false);
}

