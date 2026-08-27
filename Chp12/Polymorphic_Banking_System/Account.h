#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
    private:
        double bankBalance;
    
    public:
        explicit Account(double = 0.0);
        virtual void debit(double) ;
        virtual void credit(double) ;
        double getBalance() const;
        virtual ~Account();

};

#endif