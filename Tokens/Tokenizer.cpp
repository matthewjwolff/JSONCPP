/* 
 * File:   Tokenizer.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 21, 2015, 11:19 PM
 */

#include "Tokenizer.h"
#include "NumberToken.h"
#include "StringToken.h"
#include <cstdlib>

Tokenizer::Tokenizer(std::istream* stream) {
    this->stream = stream;
}

Tokenizer::Tokenizer(const Tokenizer& orig) {
}

Tokenizer::~Tokenizer() {
}

Token* Tokenizer::getNextToken() {
    char next;
    *stream >> next;
    
    //Get rid of whitespace
    while(next == ' ')
        *stream >> next;
    
    //Single character tokens
    if(next=='{')
        return new Token(LBRACE);
    if(next=='}')
        return new Token(RBRACE);
    if(next=='[')
        return new Token(LBRACK);
    if(next==']')
        return new Token(RBRACK);
    if(next==':')
        return new Token(COLON);
    if(next==',')
        return new Token(COMMA);
    //Word-based identifiers
    if(next>64 && next<123) {
        std::string buffer;
        *stream>>next;
        while(next!=' ') {
            buffer+=next;
            *stream>>next;
        }
        if(buffer=="true")
            return new Token(TRUE);
        if(buffer=="false")
            return new Token(FALSE);
        if(buffer=="null")
            return new Token(NIL);
        return NULL;
    }
    //Build string literal
    if(next=='"') {
        std::string buffer;
        *stream>>next;
        while(next!='"') {
            //Escaped characters
            if(next=='\\')
                *stream>>next;
            buffer+=next;
            *stream>>next;
        }
        return new StringToken(buffer);
    }
    //Build number literal
    if((next>47 && next<58) || next=='-') {
        std::string buffer;
        *stream>>next;
        while(next!=' ') {
            buffer+=next;
            *stream>>next;
        }
        double value = std::strtod(buffer.c_str(), NULL);
        return new NumberToken(value);
    }
    return NULL;
}

