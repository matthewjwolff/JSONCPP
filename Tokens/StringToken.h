/* 
 * File:   StringToken.h
 * Author: Matthew Wolff
 *
 * Created on October 21, 2015, 11:16 PM
 */

#ifndef STRINGTOKEN_H
#define	STRINGTOKEN_H

#include "Token.h"

class StringToken : public Token{
public:
    StringToken(std::string str);
    StringToken(const StringToken& orig);
    virtual ~StringToken();
    std::string getString();
private:
    std::string str;
};

#endif	/* STRINGTOKEN_H */

