#include <iostream>
#include "classEncrypt.h"
using namespace std;

int main() {
    classEncrypt crypter ;
    int number;
    cin >> number;

    int enc = crypter.encrypt(number);
    number = crypter.decrypt(enc);

    cout << enc << endl;
    cout << number << endl;
}
//decrypt remaining