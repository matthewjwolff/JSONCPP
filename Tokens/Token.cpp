/* 
 * File:   Token.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 21, 2015, 11:12 PM
 */

#include "Token.h"

Token::Token(TokenType type) {
    this->type = type;
}

Token::Token(const Token& orig) {
}

Token::~Token() {
}

TokenType Token::getType() {
    return this->type;
}

std::string Token::getString() {
    return "";
}

double Token::getNumber() {
    return 0;
}

