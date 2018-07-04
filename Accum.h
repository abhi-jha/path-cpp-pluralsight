//
// Created by user on 5/7/18.
//

#ifndef PATH_CPP_PLURALSIGHT_ACCUM_H
#define PATH_CPP_PLURALSIGHT_ACCUM_H

template <class T>
class Accum {
private:
    T total;
public:
    explicit Accum(T start):total(start){}
    T operator+=(T const& t){return total = total + t;}
    T getTotal() const { return total;}
};

void accum();
#endif //PATH_CPP_PLURALSIGHT_ACCUM_H
