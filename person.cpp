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

