//
// Created by user on 3/7/18.
//

#ifndef PATH_CPP_PLURALSIGHT_TRANSACTION_H
#define PATH_CPP_PLURALSIGHT_TRANSACTION_H

#pragma once
#include <string>


class Transaction {
private:
    int amount;
    std::string type;
public:
    Transaction(int amt, std::string kind);
    std::string Report() const;
};


#endif //PATH_CPP_PLURALSIGHT_TRANSACTION_H
