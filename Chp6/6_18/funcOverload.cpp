#include <iostream>
using namespace std;

int square(int x) { 
    cout << "square of int number is ";
    return x*x;
}
double square(double x) { 
    cout << "square of double number is ";
    return x*x;
}
int main() {
    cout << square(7) << endl;
    cout << square(7.5) << endl;
}