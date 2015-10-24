/* 
 * File:   JSONNumber.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 24, 2015, 6:03 PM
 */

#include "JSONNumber.h"

JSONNumber::JSONNumber(JSONValue* parent, double* value) : JSONValue::JSONValue(parent) {
    this->value = value;
}

bool JSONNumber::isNumber() {
    return true;
}

double* JSONNumber::getNumber() {
    return value;
}

