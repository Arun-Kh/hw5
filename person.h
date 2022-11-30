#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>
#include <stdio.h>
#include <cstdlib>

// for Json::Value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>

using namespace std;

class Person
{
 public:
    string name;
    int age;
    string description;
    Person(string name, int age, string description);
    Person();

    virtual Json::Value dump2json(); 
    virtual bool JSON2Object (Json::Value);
};


#endif