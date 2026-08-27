#include <iostream>
#include <stdexcept>
#include "Account.h"
using namespace std;

Account::Account(double balance)
{
    if (balance < 0)
    {
        cerr << "Initializing balance is invalid" ;
        cout << "\nInitializing balance to 0.0" << endl;

        bankBalance = 0.0;
    }
    bankBalance = balance;
}

double Account::getBalance() const
{
    return bankBalance;
}

Account::~Account()
{
    cout << "Destroying Account Base Class" << endl;
}

void Account::credit(double cred)
{
    bankBalance += cred;
}

void Account::debit(double deb)
{
    if (deb > bankBalance)
    {
        cerr << "Amount entered exceeded current balance";
    }
    else {
    bankBalance -= deb;
    }
}
