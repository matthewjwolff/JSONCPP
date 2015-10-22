/* 
 * File:   Tokenizer.h
 * Author: Matthew Wolff
 *
 * Created on October 21, 2015, 11:19 PM
 */

#ifndef TOKENIZER_H
#define	TOKENIZER_H

#include "Token.h"
#include <istream>

class Tokenizer {
public:
    Tokenizer(std::istream* stream);
    Tokenizer(const Tokenizer& orig);
    virtual ~Tokenizer();
    Token* getNextToken();
private:
    std::istream* stream;
};

#endif	/* TOKENIZER_H */

