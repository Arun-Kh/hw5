#include "person.h"

int main() {
    //name, description, age
    Person Red("Little Red Riding Hood", "Little Red", "little");
    Person Wolf("wolf", NULL, NULL);
    Person Grandmother("Grandma", NULL, NULL);

    Person::Person(std::string arg_SSN, std::string arg_name, GPS_DD arg_home)
{
  this->SSN = arg_SSN;
  this->name = arg_name;
  this->home = arg_home;
}

Person::Person()
{
  this->SSN = "";
  this->name = "";
  this->home = GPS_DD {};
}

void
Person::setHome
(GPS_DD arg_home)
{
  this->home = arg_home;
}

void
Person::setLocation
(GPS_DD arg_location, JvTime arg_time)
{
  this->location = arg_location;
  this->since_when = arg_time;
}

GPS_DD
Person::getHome
(void)
{
  return this->home;
}

std::string
Person::getSSN()
{
  return this->SSN;
}

std::string
Person::getName()
{
  return this->name;
}

bool
Person::operator==
(Person& aPerson)
{
  return (this->SSN == aPerson.getName());
}

Json::Value
Person::dump2JSON
(void)
{
  Json::Value result { };

  if (this->name != "")
    {
      result["name"] = this->name;
    }

  if (this->SSN != "")
    {
      result["SSN"] = this->SSN;
    }

  Json::Value jv_result;
  
  jv_result = (this->home).dump2json());
  result["home"] = jv_result;

  jv_result = (this->location).dump2json();
  result["location"] = jv_result;

  jv_result = (this->since_when).dump2json();
  result["since_when"] = jv_result;

  // std::cout << jv_result.toStyledString() << std::endl;

  return result;
}
}