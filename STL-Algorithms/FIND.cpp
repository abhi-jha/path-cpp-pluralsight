//
// Created by user on 29/7/18.
//

#include "FIND.h"

#include <iostream>

#define operation ==

void FIND::find_mechanisms() {
    std::vector<int> v{4, 6, 6, 1, 3, -2, 0, 11, 2, 3, 2, 4, 3, 2, 4};
    std::string s{"Hello I am a sentence."};

    auto result = std::find(begin(v), end(v), 0);

    result = std::find(result, std::end(v), 2);

    std::cout<<*result<<std::endl;

    int weLookedFor = 0;

    if(result != std::end(v)){
        weLookedFor = *result;
    }

    auto letter  = std::find(begin(s), end(s), 'a');

    char a = *letter;

    std::cout<<"position of first 'a' from the beginning is  : "<<letter-begin(s)<<std::endl;

    std::cout<<a<<std::endl;

    result = std::find_if(begin(v), end(v), [](auto elem) {
        return elem % 2 operation 0;
    });
    while(result!= end(v)) {
        std::cout << *result << std::endl;
        result = std::find_if(result + 1, end(v), [](auto elem) {
            return elem % 2 operation 0;
        });
    }

    std::vector<int> primes{1,2,3,5,7,11,13};

    result = std::find_first_of(begin(v), end(v), begin(primes), end(primes));

    std::cout<<*result<<std::endl;

    std::vector<int> subsequence{2,4};

    result = std::search(begin(v), end(v), begin(subsequence), end(subsequence));

    std::cout<<"result is : "<<*result<<std::endl;

    result++;
    result++;

    std::cout<<"result is : "<<*result<<std::endl;

    std::string am = "am" ;

    letter = std::search(begin(s), end(s), begin(am), end(am));

    std::cout<<"letter is : "<<*letter<<std::endl;

    result = std::find_end(begin(v), end(v), begin(subsequence), end(subsequence));

    std::cout<<"result is : "<<*result<<std::endl;

    result+=2;

    std::cout<<"result is : "<<*result<<std::endl;

    if(result!=end(v)){
        weLookedFor = *result;
    }
    std::cout<<(result != end(v))<<std::endl;

    result = std::search_n(begin(v), end(v), 2, 4);

    std::cout<<*result<<std::endl;

    result--;

    int two = *result;

    result = std::adjacent_find(begin(v), end(v));

    int six = *result;

    std::cout<<six<<std::endl;

    result++;

    six = *result;

    std::cout<<six<<std::endl;

}