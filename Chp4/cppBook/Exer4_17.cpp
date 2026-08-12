#include <iostream>
using namespace std;

int main() {
    unsigned int largest;
    for (int i = 0; i <10; i++) {
        unsigned int curr;
        cin >> curr;
        if (curr > largest) {
            largest = curr;
        }
    }
    cout << largest << endl;
}