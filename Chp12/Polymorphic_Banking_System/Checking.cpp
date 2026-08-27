#include "Checking.h"
#include <iostream>
using namespace std;

Checking::Checking(double feePerTrc, double balance) : Account(balance)
{
    feeAmount = feePerTrc;
}

void Checking::debit(double deb)
{
    if (deb > feeAmount+Account::getBalance())
    {
        cerr << "Too much money being withdrawn" << endl;
    }
    else 
    {
        Account::debit(deb + feeAmount);
    }
    cout << "\nNew Balance: " << Account::getBalance() << endl;
}

void Checking::credit(double cred)
{
    Account::credit(cred - feeAmount);
    cout << "\nNew Balance: " << Account::getBalance() << endl;
}

double Checking::getFeeAmount() const
{
    return feeAmount;
}

Checking::~Checking()
{
    cout << "Destroying checking account class object " << endl;
}