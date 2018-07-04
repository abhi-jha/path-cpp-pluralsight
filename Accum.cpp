//
// Created by user on 5/7/18.
//
#include <iostream>
#include "Accum.h"
#include "Person.h"
void accum(){
    //    Accum<int> integers(90);
    Accum<int> integers(90);
    integers += 3;
    integers += 7;
    std::cout<<integers.getTotal()<<std::endl;
    //Accum<std::string> strings("");
    Accum<std::string> strings("");
    strings += "hello";
    strings += " world";
    std::cout<<strings.getTotal()<<std::endl;

//    integers += "dsvbu"; //Type Safety
//    strings += 2;

    Accum<Person> people(0);
    Person p1("Kate","Gregory",123);
    Person p2("Someone","Else",456);

    people += p1;
    people += p2;
    std::cout<<people.getTotal()<<std::endl;

}