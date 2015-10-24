/* 
 * File:   JSONNumber.h
 * Author: Matthew Wolff
 *
 * Created on October 24, 2015, 6:03 PM
 */

#ifndef JSONNUMBER_H
#define	JSONNUMBER_H

#include "JSONValue.h"

class JSONNumber : public JSONValue {
public:
    JSONNumber(JSONValue* parent, double* value);
    bool isNumber();
    double* getNumber();
private:
    double* value;
};

#endif	/* JSONNUMBER_H */

