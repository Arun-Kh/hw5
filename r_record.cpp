#include <iostream>
#include <stdio.h>
#include <cstdlib>

// for Json::Value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>

#include "r_record.h"

#include "person.h"
#include "place.h"
#include "Thing.h"

r_record::r_record(Person person, Place location, Thing thing){
    this->thing = thing;
    this->location = location;
    this->person = person;
}

r_record::r_record(){
    thing = Thing("");
    location = Place("", 0, 0);
    person = Person("", 0, "");
}

