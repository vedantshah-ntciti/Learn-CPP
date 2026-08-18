#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()
{
    Array int1(7);
    Array int2;

    cout << "Size of Array int1 is " << int1.getSize()  << "\nArray after initialization:\n" << int1;
    cout << "Size of Array int2 is " << int2.getSize()  << "\nArray after initialization:\n" << int2;


    cout << "\nEnter 17 integers:" << endl;
    cin >> int1 >> int2;

    cout << "\nAfter input arrays contain:\n" << "int1:\n: " << int1 << "int2:\n" << int2;

    cout << "Evaluating !=" << endl;

    if (int1 != int2)
    {
        cout << "int1 is not equal to int2" << endl;
    }

    Array int3(int1);

    cout << "Size of Array int3 is " << int3.getSize()  << "\nArray after initialization:\n" << int3;

    cout << "\nAssigning int1 to int1\n" << endl;
    int1 = int2;

    cout << "\nAfter input arrays contain:\n" << "int1:\n: " << int1 << "int2:\n" << int2;
    
    cout << "Evaluating ==" << endl;

    if (int1 == int2)
    {
        cout << "int1 is equal to int2" << endl;
    }

    cout << "\nint1[5] is " << int1[5];

    cout << "\n\nAssigning 1000 ti int1[5]" << endl;
    int1[5] = 1000;
    cout << "int1:\n" << int1;

    try 
    {
        cout << "\nAttempt to assign 1000 to int1[15]" << endl;
        int1[15] = 1000;
    }
    catch (out_of_range &ex)
    {
        cout << "An exception occured: " << ex.what() << endl;
    }
}

