/* 
 * File:   JSONValue.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 23, 2015, 9:10 PM
 */

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

//TOOD: possibly change to pointer?
bool JSONValue::isBool() {
    return false;
}

bool JSONValue::isNull() {
    return false;
}

bool JSONValue::isNumber() {
    return false;
}

bool JSONValue::isObject() {
    return false;
}

bool JSONValue::isString() {
    return false;
}