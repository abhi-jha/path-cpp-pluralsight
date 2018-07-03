//
// Created by user on 4/7/18.
//

#ifndef PATH_CPP_PLURALSIGHT_TWEETER_H
#define PATH_CPP_PLURALSIGHT_TWEETER_H


#include "Person.h"

class Tweeter : public Person {
private:
    std::string twitterhandle;
public:
    Tweeter(std::string first, std::string last, int arbitrary, std::string handle);
    ~Tweeter();
};


#endif //PATH_CPP_PLURALSIGHT_TWEETER_H
