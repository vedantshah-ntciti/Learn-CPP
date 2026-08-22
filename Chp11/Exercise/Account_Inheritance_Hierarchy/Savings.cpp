#include <iostream>
#include "Savings.h"

using namespace std;

Savings::Savings(double balance, double roi) : Account(balance)
{
    InterestRate = roi;
}

double Savings::calculateInterest() const
{
    return InterestRate*Account::getBalance() / 100;
}

