#include <iostream>
using namespace std;

int main()
{
    char c;
    short s;
    int i;
    long l;
    long ll;
    float f;
    double d;
    long double ld;
    int array[20];
    int *ptr = array;

    cout << "sizeof c = " << sizeof(c) << "\tsizeof char " << sizeof(char) << endl;
    cout << "sizeof s = " << sizeof(s) << "\tsizeof char " << sizeof(short) << endl;
    cout << "sizeof i = " << sizeof(i) << "\tsizeof char " << sizeof(int) << endl;
    cout << "sizeof l = " << sizeof(l) << "\tsizeof char " << sizeof(long) << endl;
    cout << "sizeof ll = " << sizeof(ll) << "\tsizeof char " << sizeof(long long) << endl;
    cout << "sizeof f = " << sizeof(f) << "\tsizeof char " << sizeof(float) << endl;
    cout << "sizeof d = " << sizeof(d) << "\tsizeof char " << sizeof(double) << endl;
    cout << "sizeof ld = " << sizeof(ld) << "\tsizeof char " << sizeof(long double) << endl;
    cout << "sizeof array = " << sizeof(array)  << endl;
    cout << "sizeof ptr = " << sizeof(ptr) << "\tsizeof char " << sizeof(int*) << endl;
}