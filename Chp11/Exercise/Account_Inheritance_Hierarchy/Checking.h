#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

class Checking : public Account
{
    public:
        explicit Checking(double, double= 0.0 );

        void debit(double);
        void credit(double);
        
    
    private:
        double feeAmount;

};

#endif