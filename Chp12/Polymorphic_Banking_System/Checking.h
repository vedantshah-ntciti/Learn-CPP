#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

class Checking : public Account
{
    public:
        explicit Checking(double, double= 0.0 );

        virtual void debit(double) override;
        virtual void credit(double) override;
        
        double getFeeAmount() const;
        virtual ~Checking();
    
    private:
        double feeAmount;

};

#endif