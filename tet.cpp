#include<iostream>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>


//re-do creation of records using new r_record class
//fix makefile to include r_record
//create json2object functinos for each class
//start on object mobility





// #include <json/json.h>
// #include <json/reader.h>
// #include <json/writer.h>
// #include <json/value.h>
// #include <jsonrpccpp/client.h>
// for Json::value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>


#include "ecs36b_Common.h"

#include "person.h"

#include "Thing.h"

#include "place.h"

#include "r_record.h"

#include "tet.h"
//#include <jsoncpp/json/json.h>

//#include "JvTime.h"

using namespace std;

/*
Json::Value
Person::dump2json(){
	Json::Value result{};
	result["name"] = name;
    return result;
}


Json::Value
Place::dump2json(){
    Json::Value result{};
    result["name"] = name;
    return result;
}


Json::Value
Thing::dump2json(){
    Json::Value result{};
    result["name"] = name;
    return result;
}


Json::Value
Record::dump2json(){
    Json::Value result{};
    result["info"] = info;
    return result;
}
*/
// Json::Value
// Place::dump2json(){
//     Json::Value result{};
//     result["name"] = name;
//     return result;
// }

int main(){
    Person LittleRed("Little Red Riding Hood", 8, "dear little girl");
    Person Grandma("Grandma", 99, "Little Red Riding Hood's grandmother");
    Person Wolf("Wolf", 20, "big bad wolf");
    Person Mother("Mother", 30, "Little Red Riding Hood's mother");
    
    Place Woods("woods", 34.3, 34.5);
    Place Village("Village", 25.5, 26.5);

    Thing hat("red hat");
    Thing cake("cake");
    Thing wine("wine");

    Thing Oak1("First Oak Tree");
    Thing Oak2("Second Oak Tree");
    Thing Oak3("Third Oak Tree");

    //r1 r_record(LittleRed, Woods, hat);

    r_record r1(LittleRed, Woods, hat);
    r_record r2(Grandma, Village, cake);
    r_record r3(Wolf, Woods, wine);

    Json::Value r1Jv = r1.dump2Json();
    myJSON2File("Record1.json", &r1Jv);

    Json::Value r2Jv = r2.dump2Json();
    myJSON2File("Record2.json", &r2Jv);

    Json::Value r3Jv = r3.dump2Json();
    myJSON2File("Record3.json", &r3Jv);

    // Json::Value r4Jv = r4.dump2Json();
    // myJSON2File("Record4.json", &r4Jv);

    



}

/*
int main(){
    
     Json::Value final;
     //Json::Value fin(Json::arrayValue);

    Person LittleRed("Little Red Riding Hood", 8, "dear little girl");
    Person Grandma("Grandma", 99, "Little Red Riding Hood's grandmother");
    Person Wolf("Wolf", 20, "big bad wolf");
    Person Mother("Mother", 30, "Little Red Riding Hood's mother");

    //cout<<LittleRed.name;


    Place Woods("woods", 34.3, 34.5);
    Place Village("Village", 25.5, 26.5);

    Thing hat("red hat");
    Thing cake("cake");
    Thing wine("wine");

    Thing Oak1("First Oak Tree");
    Thing Oak2("Second Oak Tree");
    Thing Oak3("Third Oak Tree");

    JvTime myTime;
    

    final.append(Woods.dump2json());
    final.append(Village.dump2json());

    final.append(LittleRed.dump2json());
    final.append(Grandma.dump2json());
    final.append(Wolf.dump2json());
    final.append(Mother.dump2json());

    final.append(hat.dump2json());
    final.append(cake.dump2json());
    final.append(wine.dump2json());

    final.append(Oak1.dump2json());
    final.append(Oak2.dump2json());
    final.append(Oak3.dump2json());

    Record r1(LittleRed.name, hat.name, Woods.name, myTime.getTime());
    Record r2(Mother.name, cake.name, Woods.name, myTime.getTime());
    Record r3(Wolf.name + " and " + LittleRed.name, "", Woods.name, myTime.getTime());
    Record r4(Grandma.name, Oak1.name + ", " + Oak2.name + ", " + Oak3.name + ", ", Woods.name, myTime.getTime());

    char * fileName = "test.json";
    myJSON2File(fileName, &final);

    r1.printRecord();
    r2.printRecord();
    r3.printRecord();
    r4.printRecord();

    // cout<<endl;
    // cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    // cout<<final;

    //fin.append(Woods.dump2json());
    //Record r1(LittleRed, hat, Woods, myTime.getTime());
    //cout << final << endl;
    
    //cout<<""<<myTime.getTime();

}

*/

