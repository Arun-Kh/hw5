#include "common.h"

class Person {
    public:

    std::string name;
    std::string description;
    std::string age;

    Person(std::string name, std::string description, std::string age){
        this->name = name;
        this->description = description;
        this->age = age;
    }

    Json::Value dump2json();
};