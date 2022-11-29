#ifndef _TET_H_
#define _TET_H_


#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <math.h>


// // for Json::value
// #include <json/json.h>
// #include <json/reader.h>
// #include <json/writer.h>
// #include <json/value.h>
//  #include <json/json.h>
// #include <jsonrpccpp/client.h>
//#include <jsonrpccpp>
// for Json::value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>
#include <jsonrpccpp/client.h>


//#include "JvTime.h"

using namespace std;

/*
class Person{
    private:
	public:
        string name;
        int age;
        string description;
        Person(string name, int age, string description){
		//char name[20];
        this->name = name;
        this->age = age;
        this->description = description;
        }

		Json::Value dump2json(void){
            Json::Value n{};
            n["name"] = name;
            n["age"] = age;
            n["description"] = description;
            return n;
        }
};
*/
/*
class Place{
    public:

        string name;
        double longitude;
        double latitude;
        Place(string name, double longitude, double latitiude){
            this->name = name;
            this->longitude = longitude;
            this->latitude = latitiude;
        }

        double distanceToOtherPlace(Place secondPlace){
            double dist = pow(longitude + secondPlace.longitude, 2);
            dist += pow(latitude + secondPlace.latitude, 2);
            dist = sqrt(dist);
            return dist;
        }

        Json::Value dump2json(void){
            Json::Value n{};
            n["name"] = name;
            return n;
        }
};
*/

/*
class Thing{
    public:
        string name;
        Thing(string name){
            this->name = name;
        }
        Json::Value dump2json(void){
            Json::Value n{};
            n["name"] = name;
            return n;
        }
        //Json::Value dump2json();
};
*/
class JvTime{
    private:
    std::chrono::time_point<std::chrono::system_clock> now =
        std::chrono::system_clock::now();
    std::time_t t_c = std::chrono::system_clock::to_time_t(now);
    public:
    JvTime(){
    }
    string getTime(){
        //cout<< "The time" << ctime(&t_c);
        return ctime(&t_c);
    }
    Json::Value dump2json(void){
            Json::Value n{};
            n["time"] = getTime();
            return n;
        }
};

class Record{
    public:

    string who;
    string what;
    string where;
    string when;
    Record(string who, string what, string where, string when){
        this->who = who;
        this->what = what;
        this->where = where;
        this->when = when;
    }

    void printRecord()
    {
        cout<<"Location: "<< where << endl;
        cout<<"Person(s): "<< who  << endl;
        cout<<"Time: "<< when << endl;
        cout<<"Things involved: "<< what << endl;
    }
};


/*
class Record{
    public: 
        //char info[100];
        Person person;
        Thing thing;
        Place place;
        string time;

        Thing food1;
        Thing food2;


        Record(){
            this->person = Person("", 0, "");
            this->thing = Thing("");
            this->place = Place("", 0, 0);
            this->time = "";
            this->food1 = Thing("");
            food2 = Thing("");
        }

        Record(Person person, Thing thing, Place place, string time){
            this->person = person;
            this->thing = thing;
            this->place = place;
            this->time = time;
            food1 = Thing("");
            food2 = Thing("");
        }

        Record(Person person, Thing thing, Place place, string time, Thing food1, Thing food2){
            this->person = person;
            this->thing = thing;
            this->place = place;
            this->time = time;
            this->food1 = food1;
            this->food2 = food2;
        }


        Json::Value dump2json();

};
*/

#endif
