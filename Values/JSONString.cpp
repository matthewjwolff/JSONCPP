/* 
 * File:   JSONString.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 23, 2015, 9:40 PM
 */

#include "JSONString.h"

JSONString::JSONString(JSONValue* parent, std::string* value) : JSONValue::JSONValue(parent) {
    this->value = value;
}

bool JSONString::isString() {
    return true;
}

std::string* JSONString::getString() {
    return value;
}
