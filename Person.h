//
// Created by user on 4/7/18.
//

#ifndef PATH_CPP_PLURALSIGHT_PERSON_H
#define PATH_CPP_PLURALSIGHT_PERSON_H


#include <string>
class Person {
private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;

public:
    //Person()= default;
    Person();
    ~Person();
    Person(std::string first, std::string last, int arbitrary);
    std::string getName();
};

#endif //PATH_CPP_PLURALSIGHT_PERSON_H
