#include <iostream>
#include "functions.h"
#include "Account.h"

#include "Person.h"
#include "structs.h"
#include "Tweeter.h"
#include "Status.h"
#include "ClassesAndObjects.h"
using std::cout;
using std::cin;
using std::endl;

//USE const reference(int cosnt &x ) as pass by value for efficiency
//Don't return references which go out of scope causing dangling pointer

#define SQR(x) ((x)*(x))
#define CUBE(x)(x*x*x)

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
void prime(){
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;

    bool prime = true;
    for(int i = 2; i <= x/i; i++){
        int factor = x /i;
        if(factor*i == x){
            cout<<"Factor found : "<<i<<" * "<<factor<<endl;
            prime = false;
            break;
        }
    }

    cout<<x<< " is ";
    if(prime)
        cout<<"prime"<<endl;
    else
        cout<<"not prime"<<endl;
}

void test2(){
    //    std::cout<<"Type your name : "<<std::endl;
//    std::string name;
//    std::cin>>name;
//    std::cout<<"Hello, "<<name<<std::endl;
//
//    int i1 = 1;
//
//    int i2;
//    i2 = 2;
//
//    int i3(3);
//
//    int i4{4};
//
//
//    double d1 = 2.2;
//    double d2 = i1;
//
//    int i5 = d1;
//
//    int c1 = 'a';
//
//    bool flag = false;
//
//    flag = i1;
//
//    flag = d1;
//
//    std::cout<<i1<<std::endl;
//    std::cout<<i2<<std::endl;
//    std::cout<<i3<<std::endl;
//    std::cout<<i4<<std::endl;
//    std::cout<<i5<<std::endl;
//
//    std::cout<<d1<<std::endl;
//    std::cout<<d2<<std::endl;
//
//    std::cout<<c1<<std::endl;
//    std::cout<<flag<<std::endl;
//
//    auto a1 = 1;
//    auto a2 = 2.2;
//    auto a3 = 'c';
//    auto a4 = "s";
//    auto a5  = true;
//    auto a6 = 3L;
//    auto a7 = 1'000'000'000;
//    auto a8 = 0xFF;
//    auto a9  = 0b111;
//    auto a10 = 0o12;
//    std::cout<<a10;
//    a1 = a2;
//    a3 = a4;
//    a4 = a3;

    Person p1("Kate", "Gregory", 123);
    {
        Person p2;
        Tweeter t1("Someone", "Else", 456, "@whoever");
        std::cout<<" name : "<< t1.getName()<<std::endl;

    }
    cout<<"after innermost block"<<endl;

    temp *t;
    temp x(2,3);
    t = &x;
    t->add();
    t->printVals();

    (*t).add();
    (*t).printVals();


    Status s = Pending;

    FileError fe = FileError ::notfound;

    fe = FileError ::ok;

    NetworkError  ne = NetworkError ::disconnected;
    ne = NetworkError ::ok;
}

void test3(){
    int x = 100;

    while( 0 <---------------------- x )//Power of the wand
    {
        printf("%d ", x);
    }
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
    std::cout<<add(add(3.0,4.0), add(1.2, 4.))<<std::endl;//Change the few values to int and check errors

    test1();

    auto temp = static_cast<int>(4.9);
    std::cout<<temp<<std::endl;

    std::cout<<CUBE(1+3)<<std::endl;//MACRO IS A TEXTUAL SUBSTITUTION BEFORE COMPILATION

    std::cout<<SQR(1+3)<<std::endl;

//    auto x;
//    x.push_back("hello");
//    x.push_back("a");
//    for(const auto &s : x)
//        std::cout<<s<<std::endl;

    typedef std::vector<std::string> VectorOfString;
    typedef std::vector<double> VectorOfDouble;


    test2();

    prime();

    test3();

    classesAndObjects();

    return 0;
}