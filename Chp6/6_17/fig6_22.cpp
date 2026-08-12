#include <iostream>
using namespace std;

int number = 7;

int main() {
    double number = 10.5;
    
    cout << "Local double val of number = " << number  << "\nGlobal int val of number =  " << ::number<<endl;
}