#include <iostream>
using namespace std;

int squareByVal( int );
void squareByRef( int & );

int main() {
    int x = 2;
    int z = 4;
    
    
    cout << "x = " << x << " before, now it is " << squareByVal(x) << "after square x = " << x << endl;

    cout << "z = " << z << " before, now it is " << endl;
    squareByRef(z);
    cout << "after square z = " << z << endl;
}

int squareByVal( int num) {
    return num *= num;
}

void squareByRef( int &num) {
    num *= num;
}