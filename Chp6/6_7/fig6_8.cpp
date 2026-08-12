#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    for (int i = 1 ; i<=20; i++) {
        cout << setw(10) << (1+rand() %6);
    
        if (i%5 == 0) {
            cout << endl;
        }
    }
}