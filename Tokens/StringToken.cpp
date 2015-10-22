/* 
 * File:   StringToken.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 21, 2015, 11:17 PM
 */

#include "StringToken.h"

StringToken::StringToken(std::string str) : Token::Token(STRING){
    this->str = str;
}

StringToken::StringToken(const StringToken& orig) : Token::Token(orig) {
}

StringToken::~StringToken() {
}

std::string StringToken::getString() {
    return this->str;
}
