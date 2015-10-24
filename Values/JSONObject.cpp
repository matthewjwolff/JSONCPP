/* 
 * File:   JSONObject.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 24, 2015, 5:54 PM
 */

#include "JSONObject.h"

JSONObject::JSONObject(JSONValue* parent, std::map<JSONString, JSONValue>* value) : JSONValue::JSONValue(parent) {
    this->value = value;
}

bool JSONObject::isObject() {
    return true;
}

std::map<JSONString, JSONValue>* JSONObject::getObject() {
    return value;
}

