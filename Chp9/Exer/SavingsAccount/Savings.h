#ifndef SAVINGS_H
#define SAVINGS_H

class Savings
{
    public:
        void calculateMonthlyInterest();
        static void modifyInterestRate(float);
        explicit Savings(float = 0);
        void printBalance() const;


    private:
        float savingsBalance;
        static float annualInterestRate;

};

#endif
