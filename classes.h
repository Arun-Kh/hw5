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

    //Json::Value dump2json();
};

class Thing {
    public:

    std::string name;
    std::string size;
    std::string description;

    Thing(std::string name, std::string size, std::string description){
        this->name = name;
        this->size = size;
        this->description = description;
    }

    //Json::Value dump2json();
};

class GPS {
    public:

    std::string relativeLocation;

    GPS(std::string relativeLocation){
        this->relativeLocation = relativeLocation;
    }

    //Json::Value dump2json();
};

class Time {
    public:

    std::string when;

    Time(std::string when){
        this->when = when;
    }

    //Json::Value dump2json();
};

class Record {
    public:

    std::string when;
    std::string where;
    std::string who;
    std::string which;

    Record(std::string when, std::string where, std::string who, std::string which){
        this->when = when;
        this->where = where;
        this->who = who;
        this->which = which;
    }

    //Json::Value dump2json();
};