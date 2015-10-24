/* 
 * File:   JSONValue.h
 * Author: Matthew Wolff
 *
 * Created on October 23, 2015, 9:10 PM
 */

#ifndef JSONVALUE_H
#define	JSONVALUE_H

#include <vector>
#include <stdio.h>
#include <map>
#include <string>

class JSONValue {
public:
    JSONValue(JSONValue* parent);
    virtual bool isArray();
    virtual std::vector<JSONValue>* getArray();
    virtual bool isString();
    virtual std::string* getString();
    virtual bool isNumber();
    virtual double getNumber();
    virtual bool isBool();
    virtual bool getBool();
    virtual bool isNull();
    JSONValue* getParent();
private:
    JSONValue* parent;
};

#endif	/* JSONVALUE_H */

