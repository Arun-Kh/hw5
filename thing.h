#include "common.h"

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