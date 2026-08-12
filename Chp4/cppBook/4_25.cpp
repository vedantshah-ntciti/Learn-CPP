#include <iostream>
using namespace std;

int main() {
    unsigned int length, breadth;
    cin >> length;
    cin >> breadth;
    for (int i = 0; i<length;i++){
        cout << "*";
    }
    cout << endl;
    for (int j = 0; j<breadth -2; j++){
        for (int i = 0; i<length;i++){
            (i==0 || i==length -1) ? cout << "*" : cout << " ";
    } 
    cout << endl;
}
    for (int i = 0; i<length;i++){
            cout << "*";
        }
    cout << endl;
}
