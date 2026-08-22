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

void Account::credit(double cred)
{
    bankBalance += cred;
}

bool Account::debit(double deb)
{
    if (deb > bankBalance)
    {
        cerr << "debit failed, amount exceed bankBalace" << endl;
        return false;
    }
    else
    {
        bankBalance -= deb;
        return true;
    }
}

double Account::getBalance() const
{
    return bankBalance;
}