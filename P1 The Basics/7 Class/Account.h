

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
	Account(): amount(0.0) { }
	Account(const std::string &s, double amt):
		owner(s), amount(amt) { }

    void calculate() { amount += amount * interestRate; }
    double balance() { return amount; }
public:
    static double rate() { return interestRate; }
    static void rate(double);   
private:
    std::string owner; 
    double amount;
    static double interestRate; 
    static double initRate() { return .0225; }
    static const std::string accountType;
    static const int period = 30;// period is a constant expression
    double daily_tbl[period];
};
#endif
