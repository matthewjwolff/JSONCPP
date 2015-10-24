/* 
 * File:   JSONValue.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 23, 2015, 9:10 PM
 */

#include <iosfwd>
#include <map>

#include "JSONValue.h"

JSONValue::JSONValue(JSONValue* parent) {
    this->parent = parent;
}

JSONValue* JSONValue::getParent() {
    return this->parent;
}

bool JSONValue::isArray() {
    return false;
}

std::vector<JSONValue>* JSONValue::getArray() {
    return NULL;
}

//TOOD: possibly change to pointer?
bool JSONValue::isBool() {
    return false;
}

bool JSONValue::getBool() {
    return 0;
}

bool JSONValue::isNull() {
    return false;
}

bool JSONValue::isNumber() {
    return false;
}

double JSONValue::getNumber() {
    return 0;
}

bool JSONValue::isString() {
    return false;
}

std::string* JSONValue::getString() {
    return NULL;
}