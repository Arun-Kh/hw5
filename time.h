#include "common.h"

class Time {
    public:

    std::string when;

    Time(std::string when){
        this->when = when;
    }

    Json::Value dump2json();
};