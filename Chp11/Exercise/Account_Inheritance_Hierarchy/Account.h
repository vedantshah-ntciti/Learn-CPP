#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
    private:
        double bankBalance;
    
    public:
        explicit Account(double = 0.0);
        bool debit(double);
        void credit(double);
        double getBalance() const;

};

#endif