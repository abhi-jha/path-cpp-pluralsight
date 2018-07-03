//
// Created by user on 3/7/18.
//

#include "Account.h"

Account::Account():balance(0),limit(100) {}

bool Account::Deposit(int amt) {
    if(amt >= 0){
        balance += amt;
        log.push_back(Transaction(amt, "Deposit"));
        balance -= 1;
        log.push_back(Transaction(1, "Service Charge"));
        return true;
    }
    return false;
}

std::vector<std::string> Account::Report() {
    std::vector<std::string> report;
    report.push_back("Balance is "+std::to_string(balance));
    report.push_back("Transaction : ");

    for(auto t : log){
        report.push_back(t.Report());
    }

    report.push_back("--------------------");
    return report;
}

bool Account::withdraw(int amt) {
    if(amt>=0){
        if(balance + limit >=  amt){
            balance -= amt;
            log.push_back(Transaction(amt, "withdrawl"));
            balance -= 1;
            log.push_back(Transaction(1, "Service Charge"));
            return true;
        }
        else
            return false;
    }
    return false;
}
//
//int Account::getBalance() {
//    return balance;
//}