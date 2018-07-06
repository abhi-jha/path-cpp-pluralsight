//
// Created by user on 6/7/18.
//
#include <iostream>
#include "Features1417.h"
constexpr double fibonacci_loop(int n);
constexpr double fibonacci_recurse(int n);
void it_is_deprecated()__attribute__ ((deprecated));
template<class T>
T greater_number(T a, T b);
auto return_type(double side){//This function definition needs be before the use
    return side*side;
}
constexpr double fibonacci_loop(int n){//This function definition needs be before the use
    auto F_0 = 0 ;
    auto F_1 = 1;
    auto current = -1;
    while(--n){
        current = F_0 + F_1;
        F_0 = F_1;
        F_1 = current;
    }
    return current;
}

constexpr double fibonacci_recurse(int n){//This function definition needs be before the use
    switch (n){
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            return fibonacci_recurse(n-1) + fibonacci_recurse(n-2);
    }
}

template <typename T>
constexpr T maxValue = T(1000);

template <>
constexpr double maxValue<double> = 2000;

template <>
constexpr char maxValue<char> = 'Z';

void features(){
    int a  = 1'000'000;
    double b = 1'2.00001;
    auto binary = 0x45;//Binary val
    auto c  = 0b010'101;//Binary val
    std::cout<<return_type(b)<<std::endl;
    std::cout<<fibonacci_loop(10)<<std::endl;
    std::cout<<fibonacci_recurse(10)<<std::endl;
    static_assert(fibonacci_loop(10)==55,"Unexpected fibonancci number.");
    static_assert(fibonacci_recurse(10)==55,"Unexpected fibonancci number.");//Change value to see error at compile time instead in run time
    std::cout<<greater_number(34.304,4.35)<<std::endl;

    std::cout<<" maxValue<int>      :    "<<maxValue<int><<"\n";

    std::cout<<" maxValue<double>   :    "<<maxValue<double><<"\n";

    std::cout<<" maxValue<char>     :    "<<maxValue<char><<"\n";

    it_is_deprecated();
}

template<class T>
T greater_number(T a, T b){
    return a>b?a:b;
}

//[[deprecated("It is deprecated because it is deprecated")]]
void it_is_deprecated(){
    std::cout<<"Deprecated method";
}