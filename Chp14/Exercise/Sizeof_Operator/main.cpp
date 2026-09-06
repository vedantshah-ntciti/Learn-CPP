#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << endl
        << "char" << setw(24) << sizeof(char) << endl
        << "unsigned int" << setw(16) << sizeof(unsigned int) << endl
        << "short int" << setw(19) << sizeof(short int) << endl
        << "unsigned short int"<< setw(10) << sizeof(unsigned short int) << endl
        << "int"<< setw(25) << sizeof(int) << endl
        << "unsigned int"<< setw(16) << sizeof(unsigned int) << endl
        << "long int"<< setw(20) << sizeof(long int) << endl
        << "unsigned long int"<< setw(11) << sizeof(unsigned long int) << endl
        << "float"<< setw(23) << sizeof(float) << endl
        << "double"<< setw(22) << sizeof(double) << endl
        << "long double"<< setw(17) << sizeof(long double) << endl
        << endl;
}
