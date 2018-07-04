//
// Created by user on 4/7/18.
//
#include <iostream>
#include "Person.h"
#include "ClassesAndObjects.h"


void classesAndObjects(){
    Person p1 ("Kate","Gregory",123);
    Person p2 ("Someone","Else",456);

    std::cout<<"p1 is : ";
    if(!(p1<p2))
        std::cout<<"not "<<std::endl;
    std::cout<<"less than p2"<<std::endl;

    std::cout<<"p1 is : ";

    if(!(p1<300))
        std::cout<<"not ";
    std::cout<<"less than 300"<<std::endl;

    std::cout<<"300 is ";

    if(!(300<p1))
        std::cout<<"not ";
    std::cout<<"less than p1"<<std::endl;

}