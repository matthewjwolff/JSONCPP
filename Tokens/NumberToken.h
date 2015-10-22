/* 
 * File:   NumberToken.h
 * Author: Matthew Wolff
 *
 * Created on October 21, 2015, 11:15 PM
 */

#ifndef NUMBERTOKEN_H
#define	NUMBERTOKEN_H

#include "Token.h"

class NumberToken : public Token {
public:
    NumberToken(double value);
    NumberToken(const NumberToken& orig);
    virtual ~NumberToken();
    double getNumber();
private:
    double value;
};

#endif	/* NUMBERTOKEN_H */

