#include "Checking.h"
#include <iostream>
using namespace std;

Checking::Checking(double feePerTrc, double balance) : Account(balance)
{
    feeAmount = feePerTrc;
}

void Checking::debit(double deb)
{
    if (deb < feeAmount+Account::getBalance())
    {
        cerr << "Too much money being withdrawn" << endl;
    }

    Account::debit(deb + feeAmount);
}

void Checking::credit(double cred)
{
    Account::credit(cred - feeAmount);
}