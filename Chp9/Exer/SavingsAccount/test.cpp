#include <iostream>
#include "Savings.h"
using namespace std;

int main()
{
    Savings::modifyInterestRate(3.00);

    Savings saver1(2000.00);
    Savings saver2(3000.00);
    
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    Savings::modifyInterestRate(4.00);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
}