/* 
 * File:   JSONArray.h
 * Author: Matthew Wolff
 *
 * Created on October 24, 2015, 5:08 PM
 */

#ifndef JSONARRAY_H
#define	JSONARRAY_H

#include "JSONValue.h"
#include <vector>

class JSONArray : public JSONValue {
public:
    JSONArray(JSONValue* parent, std::vector<JSONValue>* value);
    bool isArray();
    std::vector<JSONValue>* getArray();
private:
    std::vector<JSONValue>* value;
};

#endif	/* JSONARRAY_H */

