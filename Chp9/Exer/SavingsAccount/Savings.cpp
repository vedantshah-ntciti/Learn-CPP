#include <iostream>
#include "Savings.h"
using namespace std;

float Savings::annualInterestRate;

Savings::Savings(float balance) : savingsBalance(balance)
{
}

void Savings::calculateMonthlyInterest()
{
    float interest = savingsBalance*((annualInterestRate)/1200);
    savingsBalance += interest;

    cout << "Interest this month is: " << interest << "\n" << endl;
    printBalance();
}

void Savings::modifyInterestRate(float rpa)
{
    annualInterestRate = rpa;
}

void Savings::printBalance() const
{
    cout << "\nBalance: " << savingsBalance << endl;
}
