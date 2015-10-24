/* 
 * File:   JSONBool.h
 * Author: Matthew Wolff
 *
 * Created on October 24, 2015, 1:49 PM
 */

#ifndef JSONBOOL_H
#define	JSONBOOL_H

#include "JSONValue.h"

class JSONBool : public JSONValue {
public:
    JSONBool(JSONValue* parent, bool* value);
    bool isBool();
    bool* getValue();
private:
    bool* value;
};

#endif	/* JSONBOOL_H */

