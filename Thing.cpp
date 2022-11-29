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
