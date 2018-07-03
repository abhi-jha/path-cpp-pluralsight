//
// Created by user on 3/7/18.
//

#include <iostream>
#include <vector>
#include "algorithm"
#include "functions.h"

int add(int x, int y){
    std::cout<<x+y<<std::endl;
    return x+y;
}

double add(double x, double y){
    std::cout<<x+y<<std::endl;
    return x+y;
}

long long int longer_word(std::string str1, std::string str2){
    unsigned long a = str1.length(), b = str2.length();
    //we can use size()
    return static_cast<long long>(a-b);
}

void using_vectors(){
    std::vector<int> vi;
    for(int  i = 0 ; i < 10; i++){
        vi.push_back(i);
    }

    std::cout<<"\n";
    for(auto item : vi){
        std::cout<<item<<"  ";
    }
    std::cout<<"SIZE OF VI : "<<vi.size()<<std::endl;


    std::vector<std::string> vs;
    std::cout<<"enter three words\n";
    for(int i = 0 ; i < 3; i++){
        std::string s;
        std::cin>>s;
        vs.push_back(s);
    }

    for(const auto &item : vs){
        std::cout<<item<<"  ";
    }

    for(unsigned int i = 0 ; i < vi.size(); i++){
        std::cout<< vi[i]<<" ";
    }

    for(auto i = std::begin(vi); i != std::end(vi); i++){
        std::cout<< *i << " ";
    }

    std::sort(std::begin(vs), std::end(vs));

    for(const auto &item : vs){
        std::cout<<item<<"  ";
    }

    std::cout<<"\n\ncount of 3s in VI : "<<std::count(std::begin(vi), std::end(vi), 3);

    std::cout<<"\n\n count of Ts in first word of the container : "<<std::count(std::begin(vs[2]), std::end(vs[0]), 't');

    std::cout<<std::endl;
}
