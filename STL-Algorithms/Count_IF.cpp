//
// Created by user on 29/7/18.
//

#include "Count_IF.h"
#include <iostream>
void COUNT_IF::count_if_mechanisms(){
    std::vector<int> v{2, 7, 1, 6, 2, -2, 4, 0};

    int twos  = 0;
    int const target = 2;

    for(size_t i = 0; i< v.size(); i++){
        if(v[i] == target){
            twos++;
        }
    }

    std::cout<<twos<<std::endl;

    twos = count(v.begin(), v.end(), target);

    std::cout<<twos<<std::endl;

    twos = count(begin(v), end(v), target);

    std::cout<<twos<<std::endl;

    int odds = 0 ;
    for(auto elem : v){
        if( elem % 2 != 0){
            odds++;
        }
    }

    std::cout<<odds<<std::endl;

    odds = count_if(begin(v), end(v), [](auto elem){
        return elem % 2 != 0;
    });

    std::cout<<odds<<std::endl;

    std::map<int, int> monthlengths{ { 1,31 },{ 2,28 },{ 3,31 },{ 4,30 },{ 5,31 },{ 6,30 },{ 7,31 },{ 8,31 },{ 9,30 },{ 10,31 },{ 11,30 },{ 12,31 } };

    int longmonths  =count_if(begin(monthlengths), end(monthlengths),[](auto elem){
        return elem.second == 31;
    });

    std::cout<<longmonths<<std::endl;

    bool allof, noneof, anyof;

    allof = (odds == v.size());
    noneof = (odds == 0);
    anyof = (odds > 0);

    allof = all_of(begin(v), end(v), [](auto elem){
        return elem % 2 != 0 ;
    });

    noneof  = none_of(begin(v), end(v), [](auto elem){
        return elem % 2 != 0 ;
    });

    anyof  = any_of(begin(v), end(v), [](auto elem){
        return elem % 2 != 0 ;
    });

    std::cout<<allof<<std::endl;
    std::cout<<noneof<<std::endl;
    std::cout<<anyof<<std::endl;
}