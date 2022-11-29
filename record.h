#include "common.h"

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

    Json::Value dump2json();
};