/* 
 * File:   JSONNull.h
 * Author: Matthew Wolff
 *
 * Created on October 24, 2015, 1:45 PM
 */

#ifndef JSONNULL_H
#define	JSONNULL_H

#include "JSONValue.h"

class JSONNull : public JSONValue {
public:
    JSONNull(JSONValue* parent);
    bool isNull();
private:

};

#endif	/* JSONNULL_H */

