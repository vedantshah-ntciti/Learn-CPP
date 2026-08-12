#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double amount;
    double principal = 1000;
    double rate = .05;
    
    cout << "Year" << setw(21) << "Amount for deposit" << endl;

    for (int i = 1; i<=10; i++){
        amount = principal * pow(1+rate, i);    

        cout << setw(4) << i << setw(21) << amount << endl;
    }


}