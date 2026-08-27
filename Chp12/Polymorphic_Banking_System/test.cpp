#include <iostream>
#include "Savings.h"
#include "Checking.h"
#include <vector>
#include <iomanip>
using namespace std;

int main() 
{
    vector <Account *> accounts(2);

    cout << fixed << setprecision(2);

    accounts[0] = new Savings(5, 3000);
    accounts[1] = new Checking(.05, 4000);

    for (Account *accPtr : accounts)
    {
        Savings *savingPtr = dynamic_cast <Savings *> (accPtr);
        double deb;
        cout << "Enter debit amount" << endl;
        cin >> deb;
        accPtr->debit(deb);
        if (savingPtr != nullptr)
        {
            cout << "Processing saving account" << endl;
            savingPtr->credit(savingPtr->calculateInterest());
        }
        else
        {
            cout << "Processing checking account" << endl;
        }
    }

    for (Account *accPtr : accounts)
    {
        double cred;

        Savings *savingPtr = dynamic_cast <Savings *> (accPtr);
        cout << "Enter credit amount" << endl;
        cin >> cred;
        accPtr->credit(cred);

        if (savingPtr != nullptr)
        {
            cout << "Processing saving account\n" << endl;
            savingPtr->credit(savingPtr->calculateInterest());
        }
        else
        {
            cout << "Processing checking account\n" << endl;
        }
    }

    cout << "\nSaving Account " << accounts[0]->getBalance() << endl;
    cout << "\nChecking Account " << accounts[1]->getBalance() << endl;

}