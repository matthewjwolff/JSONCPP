/* 
 * File:   JSONNull.cpp
 * Author: Matthew Wolff
 * 
 * Created on October 24, 2015, 1:45 PM
 */

#include "JSONNull.h"

JSONNull::JSONNull(JSONValue* parent) : JSONValue::JSONValue(parent) {
}

bool JSONNull::isNull() {
    return true;
}
