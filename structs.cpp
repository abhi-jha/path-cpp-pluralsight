//
// Created by user on 4/7/18.
//

#include <iostream>
#include "structs.h"
temp::temp(int x, int y):a(x), b(y) {std::cout<<"Constructing"<<std::endl;}

void temp::printVals() {
    std::cout<<" a : "<<a<<"  b : "<<b<<std::endl;
}

void temp::add() {
    std::cout<<" a + b : "<< a + b <<std::endl;
}

temp::~temp() {
    std::cout<<"Deconstructing"<<std::endl;
}