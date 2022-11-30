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

bool 
Place::JSON2Object(Json::Value n){
  if(n["name"].isNull() || !(n["name"].isString())){
    return false;
  }
  if(n["latitude"].isNull() || !(n["latitude"].isDouble())){
    return false;

  }
  if(n["longitude"].isNull() || !(n["longitude"].isDouble())){
    return false;
  }

  this->name = (n["name"]).asString();
  this->latitude = n["latitude"].asDouble();
  this->longitude = n["longitude"].asDouble();

  return true;
}