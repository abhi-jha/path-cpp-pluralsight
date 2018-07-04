//
// Created by user on 4/7/18.
//

#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
    std::cout<<"Constructing"<<std::endl;
}

std::string Person::getName() const {
    return firstname + "  " + lastname;
}

Person::Person() : arbitrarynumber(0) {
    std::cout<<"Constructing"<<std::endl;

}

Person::~Person() {
    std::cout<<"Destructing  "<<firstname<<"  "<<lastname<<std::endl;
}

bool Person::operator<(Person const &p) const {
    return this->arbitrarynumber<p.arbitrarynumber;
}

bool Person::operator<(int i) const {
    return this->arbitrarynumber<i;
}

bool operator<(int i, Person const& p){
    return i<p.arbitrarynumber; //Now able to access private fields
}
