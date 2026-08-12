#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}
int main() {
    int a, b;
    int i = 0;
    while (i<10) {
        cin >> a >> b;
        cout << sum(a,b) << endl;
        i++;
    }    
}
