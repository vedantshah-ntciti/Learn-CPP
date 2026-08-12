#include <iostream>
using namespace std;

int main()
{
    int a  = 7;
    int *aPtr = &a;

    cout << "A address is " << &a << endl;
    cout << "Pointer value is " << aPtr << endl;
    cout << "a value is " <<  a << endl;
    cout << "deferenced value is " << *aPtr << endl;

}