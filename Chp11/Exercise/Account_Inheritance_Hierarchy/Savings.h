#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class Savings : public Account
{
    public:
        explicit Savings(double = 0.0 , double);

        double calculateInterest() const;
    
    private:
        double InterestRate;
};

#endif