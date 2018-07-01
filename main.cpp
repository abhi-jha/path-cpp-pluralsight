#include <iostream>


int add(int x, int y){
    return x+y;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout<< 12+2<<"\n";

    int i;
    i = 9/2;

    std::cout<<i<<"\n";
    double  j ;

    j = 9.0/2;
    std::cout<<j<<"\n";

    auto  k = 9/2;
    std::cout<<k<<"\n";

    double m = add(3.1,2);

    std::cout<<m<<"\n";
    std::cout<<add(add(3,4), add(1.2, 4));
    return 0;
}