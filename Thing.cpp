#include "Thing.h"
#include <iostream>

using namespace std;

Thing::Thing(string name){
    this->name = name;
}

Thing::Thing(){
    this->name = "";
}

Json::Value
Thing::dump2json
(void)
{
  Json::Value n { };
  if (this->name != "")
    {
      n["name"] = this->name;
    }
  return n;
}

bool
Thing::JSON2Object(Json::Value n){
  
  if(n["name"].isNull() || !(n["name"].isString())){
    return false;
  }
  
  this->name = (n["name"]).asString();

  return true;
}
