/* 
 * File:   NumberToken.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 21, 2015, 11:15 PM
 */

#include "NumberToken.h"

NumberToken::NumberToken(double value) : Token::Token(NUMBER) {
    this->value = value;
}

NumberToken::NumberToken(const NumberToken& orig) : Token::Token(orig) {
}

NumberToken::~NumberToken() {
}

double NumberToken::getNumber() {
    return this->value;
}

