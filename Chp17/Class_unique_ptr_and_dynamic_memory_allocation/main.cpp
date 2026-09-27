#include <iostream>
#include <memory>
using namespace std;

#include "Integer.hpp"

int main()
{
    cout << "Creating a unique_ptr object that points to an  Integer\n";

    unique_ptr<Integer> ptrToInteger( new Integer(7) );
    cout << "\nUsing the unique_ptr to manipulate the Integer\n";
    ptrToInteger->setInteger( 99 );

    cout << "Integer after setInteger: " << ( *ptrToInteger ).getInteger()  << "\n\nTerminamting Program" << endl;
}
