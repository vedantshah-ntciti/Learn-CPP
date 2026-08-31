#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
    PhoneNumber phone;

    cout << "Enter the phone number is the form (800) 555-1212: \n";

    if (std::cin >> phone)
    {
        cout << phone;
    }

}
