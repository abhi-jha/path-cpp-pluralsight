//
// Created by user on 4/7/18.
//

#ifndef PATH_CPP_PLURALSIGHT_PERSON_H
#define PATH_CPP_PLURALSIGHT_PERSON_H

#include "Resource.h"
#include <string>
#include <memory>
class Person {
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
    std::shared_ptr<Resource> pResource;
    friend bool operator<(int i, Person const& p);
public:
    //Person()= default;
    Person();
    Person(std::string first, std::string last, int arbitrary);
    Person(Person const& p);
    Person&operator=(const Person& p);
    std::string getName() const;
    int getNumber() const{return arbitrarynumber;}
    void setNumber(int n){arbitrarynumber = n;}
    void setFirstName(std::string s){firstname = s;}
    bool operator<(Person const& p) const;
    bool operator<(int i) const;
    void addResource();
};

//bool operator<(int i, Person const& p);
#endif //PATH_CPP_PLURALSIGHT_PERSON_H
