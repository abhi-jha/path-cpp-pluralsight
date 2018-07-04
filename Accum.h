//
// Created by user on 5/7/18.
//

#ifndef PATH_CPP_PLURALSIGHT_ACCUM_H
#define PATH_CPP_PLURALSIGHT_ACCUM_H

#include "Person.h"

template <class T>
class Accum {
private:
    T total;
public:
    explicit Accum(T start):total(start){}
    T operator+=(T const& t){return total = total + t;}
    T getTotal() const { return total;}
};



//TEMPLATE SPECIALIZATION

template <>
class Accum<Person> {
private:
    int total;
public:
    explicit Accum(int start):total(start){}
    int operator+=(Person const& t){return total = total + t.getNumber();}
    int getTotal() const { return total;}
};
void accum();
#endif //PATH_CPP_PLURALSIGHT_ACCUM_H
