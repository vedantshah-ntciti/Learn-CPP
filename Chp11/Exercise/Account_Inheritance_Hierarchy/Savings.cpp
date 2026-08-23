#include <iostream>
#include "Savings.h"

using namespace std;

Savings::Savings(double roi, double balance) : Account(balance)
{
    InterestRate = roi;
}

double Savings::calculateInterest() const
{
    return InterestRate*Account::getBalance() / 100;
}

