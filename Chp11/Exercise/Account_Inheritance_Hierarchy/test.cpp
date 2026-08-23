#include <iostream>
#include "Savings.h"
#include "Checking.h"
using namespace std;

int main() 
{
    cout << "Initializing Savings and Account Class" << endl;
    Savings sv1(2.0, 1000);
    Checking ck1(.5, 2000);

    cout << "Adding interest to sv1" << endl;
    sv1.credit(sv1.calculateInterest());
    cout << "new sv1 balnce is: " << sv1.getBalance() << endl;

    cout << "Debiting 500 to both accounts : " << endl;
    sv1.credit(500);
    cout << "new sv1 balnce is: " << sv1.getBalance() << endl;
    ck1.credit(500);
    cout << "new ck1 balnce is: " << ck1.getBalance() << endl;

    cout << "Crediting 100 from both accounts : " << endl;
    sv1.debit(100);
    cout << "new sv1 balnce is: " << sv1.getBalance() << endl;
    ck1.debit(100);
    cout << "new ck1 balnce is: " << ck1.getBalance() << endl;

    
}