#include "common.h"

class GPS {
    public:

    std::string location;

    GPS(std::string location){
        this->location = location;
    }

    Json::Value dump2json();
};