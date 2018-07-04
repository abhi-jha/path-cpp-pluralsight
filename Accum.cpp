//
// Created by user on 5/7/18.
//
#include <iostream>
#include "Accum.h"
void accum(){
    //    Accum<int> integers(90);
    Accum integers(90);
    integers += 3;
    integers += 7;
    std::cout<<integers.getTotal()<<std::endl;
    //Accum<std::string> strings("");
    Accum strings("");
    strings += "hello";
    strings += " world";
    std::cout<<strings.getTotal()<<std::endl;

//    integers += "dsvbu"; //Type Safety
//    strings += 2;
}