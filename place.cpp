#include "place.h"
#include <iostream>

using namespace std;


Place::Place(string name, double longitude, double latitiude){
    this->name = name;
    this->longitude = longitude;
    this->latitude = latitiude;
}

Place::Place(){
    this->name = "Davis";
    this->longitude = 0;
    this->latitude = 0;
}

Json::Value
Place::dump2json
(void)
{
  Json::Value n { };
  if (this->name != "")
    {
      n["name"] = this->name;
      n["longitude"] = this->longitude;
      n["latitude"] = this->latitude;
    }
  return n;
}

bool Place::JSON2Object(Json::Value){
  
}