/* 
 * File:   JSONArray.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 24, 2015, 5:08 PM
 */

#include "JSONArray.h"

JSONArray::JSONArray(JSONValue* parent, std::vector<JSONValue>* value) : JSONValue::JSONValue(parent) {
    this->value = value;
}

bool JSONArray::isArray() {
    return true;
}

std::vector<JSONValue>* JSONArray::getArray() {
    return value;
}