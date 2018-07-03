//
// Created by user on 3/7/18.
//

#include "Transaction.h"

Transaction::Transaction(int amt, std::string kind):amount(amt), type(kind) {}

std::string Transaction::Report() const {
    std::string report;
    report += "  ";
    report += type;
    report += "  ";
    report += std::to_string(amount);
    return report;
}
