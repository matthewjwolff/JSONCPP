/* 
 * File:   JSONBool.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 24, 2015, 1:49 PM
 */

#include "JSONBool.h"

JSONBool::JSONBool(JSONValue* parent, bool value) : JSONValue::JSONValue(parent) {
    this->value = value;
}

JSONBool::JSONBool(const JSONBool& orig) {
}

JSONBool::~JSONBool() {
}

int JSONBool::getData() {
    return &value;
}

bool JSONBool::getValue() {
    return value;
}

