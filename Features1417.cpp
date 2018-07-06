//
// Created by user on 6/7/18.
//
#include <iostream>
#include <memory>
#include <chrono>
#include <vector>
#include <algorithm>
#include "Features1417.h"
constexpr double fibonacci_loop(int n);
constexpr double fibonacci_recurse(int n);
void it_is_deprecated()__attribute__ ((deprecated));
void pointers();
void libraries();
void lambdas();
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

class X{
public:
    X(){
        std::cout<<" X constructor \n";
    }

    ~X(){
        std::cout<<" X destructor \n";
    }

    void sayHi(){
        std::cout<<" X says hi! :) \n";
    }

private:

    int m1{};
    double m2{3.14};
};

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

    std::cout<<std::endl<<std::endl;

    pointers();

    libraries();

    lambdas();
}

template<class T>
T greater_number(T a, T b){
    return a>b?a:b;
}

//[[deprecated("It is deprecated because it is deprecated")]]
void it_is_deprecated(){
    std::cout<<"Deprecated method";
}

void pointers(){
    //RAW pointers

    int*  p = new int[1000000];


    delete [] p;
    p = nullptr;//to avoid dangling referencing
    auto p1 = std::make_unique<double[]>(10000);


    X* x = new X{};
    x->sayHi();
    delete x;

    auto pX = std::make_unique<X>();
    pX->sayHi();
}

void print(std::chrono::milliseconds ms){
    std::cout<<ms.count()<<std::endl;
}

void libraries(){
    //Chrono library
    using namespace std::chrono;
    using namespace std::string_literals;// To use string's suffix s in a char* literal
    std::chrono::seconds s{34};
    std::cout<<s.count()<<" seconds "<<std::endl;

    auto sec = 10s; //seconds suffix
    std::cout<<s.count()<<" seconds "<<std::endl;

    auto str = "Hello"s; //String not char *
    std::cout<<str<<" is of type : "<<typeid(s).name()<<std::endl;

    auto x = 2s;
    std::cout<<" x = 2s :   "; print(x);

    auto y = 150ms;
    std::cout<<" y = 150ms :  "; print(y);

    auto z = x + y;
    std::cout<<" z = x + y :   "; print(z);

    constexpr auto timeLimit = 3s;

    std::cout<<"\n Time limit is "; print(timeLimit);
    if(z < timeLimit){
        std::cout<<" All right! \n";
    } else{
        std::cout<<" Out of time! \n";
    }
}

void print_the_vector(const std::vector<std::string> &vec){
    for(auto &s : vec){
        std::cout<<s<<"\t";
    }
    std::cout<<std::endl;
}

bool compare(std::string const& a, std::string const& b){
    return a.length()<b.length();
}
void lambdas(){
    std::vector<std::string> names{
        "abhi", "rahul", "amit", "sonya","ram","abhimanyu",
        "dravid", "tendulkar"
    };

    print_the_vector(names);

    //sort lexicographically
    std::sort(std::begin(names), std::end(names));
    print_the_vector(names);

    //Sort by length
    std::sort(std::begin(names), std::end(names), compare);
    print_the_vector(names);

    int a1 {1}, b1{3};
    //Sort by reverse-length, longer length first using lambda
    std::sort(std::begin(names), std::end(names), [a1, &b1, value = 64](auto const&a, auto const&b){// [] ---> Capture list
        std::cout<<"\ta1\t:"<<a1<<"\tb1\t"<<b1<<std::endl;
        return a.length() > b.length();
    });

    print_the_vector(names);

    std::unique_ptr<X> p1;

    std::unique_ptr<X> p2;

    //Can't copy unique pointers;
    //p2 = p1;

    p2 = std::move(p1);
    std::sort(std::begin(names), std::end(names), [a1, &b1, value = 64, u{std::move(p2)}](auto const&a, auto const&b){// [] ---> Capture list
        std::cout<<"\ta1\t:"<<a1<<"\tb1\t"<<b1<<std::endl;
        return a.length() > b.length();
    });
}
