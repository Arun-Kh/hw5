#ifndef _PLACE_H_
#define _PLACE_H_
#include <iostream>
#include <stdio.h>
#include <cstdlib>

// for Json::Value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>

using namespace std;

class Place
{
 public:

    string name;
    double longitude;
    double latitude;

    Place(string name, double longitidue, double latitude);
    Place();

    double distanceToOtherPlace(Place secondPlace);
    virtual Json::Value dump2json(); 
    bool Place::JSON2Object(Json::Value);
};


#endif