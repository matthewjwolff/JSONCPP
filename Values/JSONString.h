/* 
 * File:   JSONString.h
 * Author: Matthew Wolff
 *
 * Created on October 23, 2015, 9:40 PM
 */

#ifndef JSONSTRING_H
#define	JSONSTRING_H

#include "JSONValue.h"

class JSONString : public JSONValue {
public:
    JSONString(JSONValue* parent, std::string* value);
    bool isString();
    std::string* getString();
private:
    std::string* value;
};

#endif	/* JSONSTRING_H */

