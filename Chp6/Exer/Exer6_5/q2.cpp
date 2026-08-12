
#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a*b;
}
int main() {
    int a, b;
    int i = 0;
    while (i<5) {
        cin >> a >> b;
        cout << multiply(a,b) << endl;
        i++;
    }    
}
