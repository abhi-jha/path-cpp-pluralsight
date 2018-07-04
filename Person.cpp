//
// Created by user on 4/7/18.
//

#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary), pResource(
        nullptr)
{
    std::cout<<"Constructing "<<firstname<<"  "<<lastname<<std::endl;
}

std::string Person::getName() const {
    return firstname + "  " + lastname;
}

Person::Person() : arbitrarynumber(0) {
    std::cout<<"Constructing"<<std::endl;

}

Person::~Person() {
    //delete this;
    std::cout<<"Destructing  "<<firstname<<"  "<<lastname<<std::endl;
    delete pResource;
}

bool Person::operator<(Person const &p) const {
    return this->arbitrarynumber<p.arbitrarynumber;
}

bool Person::operator<(int i) const {
    return this->arbitrarynumber<i;
}

//bool Person::operator<(int i, Person const &p) {}
bool operator<(int i, Person const& p){//Person:: scoping not necessary
    return i<p.arbitrarynumber; //Now able to access private fields
}

void Person::addResource() {
    delete pResource;
    pResource = new Resource("Resource for "+ getName());
}

Person::Person(Person const &p) {
    pResource = new Resource(p.pResource->getName());
}

Person& Person::operator=(const Person &p) {
    delete pResource;
    pResource = new Resource(p.pResource->getName());
    return *this;
}