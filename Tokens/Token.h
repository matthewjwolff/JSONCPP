/* 
 * File:   Token.h
 * Author: Matthew Wolff
 *
 * Created on October 21, 2015, 11:12 PM
 */

#ifndef TOKEN_H
#define	TOKEN_H

#include "TokenType.h"
#include <string>

class Token {
public:
    Token(TokenType type);
    Token(const Token& orig);
    virtual ~Token();
    virtual TokenType getType();
    virtual std::string getString();
    virtual double getNumber();
private:
    TokenType type;
};

#endif	/* TOKEN_H */

