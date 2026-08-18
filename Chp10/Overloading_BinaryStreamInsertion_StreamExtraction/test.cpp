#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
    PhoneNumber phone;

    cout << "Enter phone numbers is the form (123) 456-7890: " << endl;

    cin >> phone;


    cout << "The number entered was: ";
    cout << phone << endl;
}