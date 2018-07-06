//
// Created by user on 6/7/18.
//
#include <iostream>
#include "Features1417.h"

auto return_type(double side){//This function definition needs be before the use
    return side*side;
}
void features(){
    int a  = 1'000'000;
    double b = 1'2.00001;
    auto binary = 0x45;//Binary val
    auto c  = 0b010'101;//Binary val
    std::cout<<return_type(b);
}
