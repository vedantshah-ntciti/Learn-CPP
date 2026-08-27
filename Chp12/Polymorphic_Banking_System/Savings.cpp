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

void Savings::credit(double cred)
{
    Account::credit(cred);
    cout << "\nNew Balance: " << Account::getBalance() << endl;
}

void Savings::debit(double deb)
{
    Account::debit(deb);
    cout << "\nNew Balance: " << Account::getBalance() << endl;
}

Savings::~Savings()
{
    cout << "Destroying Savings class object" << endl;
}
