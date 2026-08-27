#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class Savings : public Account
{
    public:
        explicit Savings(double , double= 0.0 );

        virtual void debit(double) override;
        virtual void credit(double) override;
        
        double calculateInterest() const;
        virtual ~Savings();
    
    private:
        double InterestRate;
};

#endif