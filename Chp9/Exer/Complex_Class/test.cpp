#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex z1(3,7);
    Complex z2(234, 501);

    z1.printEuler();
    z2.printEuler();

    z1.printPoint();
    z2.printPoint();

    cout <<  z1.getMod() << endl;
    cout <<  z1.getArg() << endl;

    cout <<  z2.getMod() << endl;
    cout <<  z2.getArg() << endl;

    z1.add(z2);
    z1.subtract(z2);

    Complex z3 = z1.multiply(z2);

    z3.printEuler();

    
}