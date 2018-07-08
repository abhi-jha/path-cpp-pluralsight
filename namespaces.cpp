//
// Created by user on 8/7/18.
//

#include <vector>
#include <string>
#include <algorithm>
#include "Features1417.h"
#include "namespaces.h"

void namespaces_and_vars_decl(){
    std::vector<std::string> names ={
            "dsjv","vdlojna","C64","Connie","rfob"
    };
    print_the_vector(names);
    const auto it = std::find(std::begin(names), std::end(names), "Connie");

    if(it!=std::end(names)) {
        *it = "***";
    }
    print_the_vector(names);

    {//A new scope with same variable declaration
        const auto it = std::find(std::begin(names), std::end(names), "C64");

        if (it != std::end(names))
            *it = "**";
    }
    print_the_vector(names);

    if(const auto it = std::find(std::begin(names), std::end(names), "vdlojna"); it!= std::end(names)){
        *it  = "****";
    }

    print_the_vector(names);
}

