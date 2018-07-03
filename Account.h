//
// Created by user on 3/7/18.
//

#ifndef PATH_CPP_PLURALSIGHT_ACCOUNT_H
#define PATH_CPP_PLURALSIGHT_ACCOUNT_H

//#pragma once

#include <vector>
#include <string>
#include "Transaction.h"
class Account {

private:
    mutable int balance;
    mutable std::vector<Transaction> log;
    int limit;
public:
    Account();
    std::vector<std::string> Report() const;
    bool Deposit(int amt) const;
    bool withdraw(int amt);
    int getBalance(){return balance;};//inline function except for implementing in .cppl
};


#endif //PATH_CPP_PLURALSIGHT_ACCOUNT_H
