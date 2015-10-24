/* 
 * File:   JSONObject.h
 * Author: Matthew Wolff
 *
 * Created on October 24, 2015, 5:54 PM
 */

#ifndef JSONOBJECT_H
#define	JSONOBJECT_H

#include "JSONValue.h"
#include "JSONString.h"
#include <map>

class JSONObject : public JSONValue {
public:
    JSONObject(JSONValue* parent, std::map<JSONString, JSONValue>* value);
    bool isObject();
    std::map<JSONString, JSONValue>* getObject();
private:
    std::map<JSONString, JSONValue>* value;
};

#endif	/* JSONOBJECT_H */

