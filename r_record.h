#ifndef _R_RECORD_H
#define _R_RECORD_H

#include <iostream>
#include <stdio.h>
#include <cstdlib>

// for Json::Value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>

#include "person.h"
#include "place.h"
#include "Thing.h"



class r_record{
    public:
    Person person;
    Place location;
    Thing thing;
    r_record(Person, Place, Thing);
    r_record();
    // r_record(Person person, Place location, Thing thing){
    //     this->thing = thing;
    //     this->location = location;
    //     this->person = person;
    // }
    // r_record(){
    //     thing = Thing("");
    //     location = Place("", 0, 0);
    //     person = Person("", 0, "");
    // }

    Json::Value dump2Json(){
        //consider adding a check to make sure null values aren't added
        Json::Value final{ };

        final["Person"] = (this->person).dump2json();
        final["Thing"] = (this->thing).dump2json();
        final["Place"] = (this->location).dump2json();

        return final;
    }
};



#endif