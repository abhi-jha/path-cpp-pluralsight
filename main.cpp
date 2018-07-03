#include <iostream>
#include "functions.h"
#include "Account.h"

void tryToChangeTransaction(Transaction t){
    t.doubleAmount();
}
void changeTransaction(Transaction& t){
    t.doubleAmount();
}
void test1(){
    Account a1;
    a1.Deposit(90);
    std::cout<<"After depositing $90 balance is "<<a1.getBalance()<<std::endl;
    for(const auto &s :a1.Report()){
        std::cout<<s<<std::endl;
    }

    a1.withdraw(50);
    if(a1.withdraw(100)){//this will fail/false for sure
        std::cout<<"Second withdraw succeeds"<<std::endl;
    }
    std::cout<<"After withdrawing $50 then $100"<<std::endl;

    for(const auto &s : a1.Report()){
        std::cout<<s<<std::endl;
    }

    Transaction deposit(50, "Deposit");
    std::cout<<"Original : "<<deposit.Report()<<std::endl;
    tryToChangeTransaction(deposit);
    std::cout<<"After pass by value : "<<deposit.Report()<<std::endl;
    changeTransaction(deposit);
    std::cout<<"After pass by reference : "<<deposit.Report()<<std::endl;
}

int main(int argc, char* argv[]) {
    for(int  i = 1 ; i < argc; i++)
        std::cout<<argv[i]<<"\t";

    std::cout << "\nHello, World!\n" << std::endl;
    std::cout<< 12+2<<"\n";

    int i;
    i = 9/2;

    std::cout<<i<<"\n";
    double  j ;

    j = 9.0/2;
    std::cout<<j<<"\n";

    auto  k = 9/2;
    std::cout<<k<<"\n";

    double m = add(3,2);

    std::cout<<m<<"\n";
    std::cout<<add(add(3.0,4.0), add(1.2, 4.));//Change the few values to int and check errors

    std::cout<<std::endl;
    test1();

    auto temp = static_cast<int>(4.9);
    std::cout<<temp<<std::endl;
    return 0;
}