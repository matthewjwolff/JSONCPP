/* 
 * File:   JSONNull.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 24, 2015, 1:45 PM
 */

#include "JSONNull.h"

JSONNull::JSONNull(JSONValue* parent) : JSONValue::JSONValue(parent) {
}

JSONNull::JSONNull(const JSONNull& orig) {
}

JSONNull::~JSONNull() {
}

bool JSONNull::isNull() {
    return true;
}

int JSONNull::getData() {
    return 0;
}
