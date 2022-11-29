#ifndef _THING_H_
#define _THING_H_
#include <iostream>
#include <stdio.h>
#include <cstdlib>

// for Json::Value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>

using namespace std;

class Thing
{
 public:

    string name;

    Thing(string name);
    Thing();

    virtual Json::Value dump2json(); 
   // virtual bool JSON2Object (Json::Value);
};


#endif