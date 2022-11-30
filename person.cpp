#include "person.h"
#include <iostream>

using namespace std;

Person::Person(string name, int age, string description)
{
  this->name = name;
  this->age = age;
  this->description = description;
}

Person::Person()
{
    this->name = "";
}


Json::Value
Person::dump2json
(void)
{
  Json::Value n { };
  if (this->name != "")
    {
      n["name"] = this->name;
      n["age"] = this->age;
      n["description"] = this->description;
    }
  return n;
}

bool
Person::JSON2Object(Json::Value n){
  if(n["name"].isNull() || !(n["name"].isString())){
    return false;
  }
  if(n["age"].isNull() || !(n["age"].isInt())){
    return false;

  }
  if(n["description"].isNull() || !(n["description"].isDouble())){
    return false;
  }

  this->name = (n["name"]).asString();
  this->age = n["age"].asInt();
  this->description = (n["description"].asString());

  return true;
}
