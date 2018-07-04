//
// Created by user on 5/7/18.
//

#include "Resource.h"
#include <iostream>

Resource::Resource(std::string name) {
    this->name = name;
    std::cout<<"Constructing : "<<this->name<<std::endl;
}

Resource::~Resource() {
    std::cout<<"Destructing : "<<name<<std::endl;
}

void testHeap(){
    {
        Resource localResource("local");
        std::string localstring = localResource.getName();
    }

    Resource* pResource = new Resource("created with new");
    std::string newString = pResource->getName();
    int j = 3;
    Resource* p2 = pResource;

    delete pResource;
    pResource= nullptr;
    //std::string string3 = pResource->getName();
    std::string string2 = p2->getName();
    delete pResource;
    delete p2;

}