#include <iostream>
using namespace std;

void function1() ;
void function2(void) ;


int main() {
    function1();
    function2();
}

void function1() {
    cout << "func1 takes no args" << endl;
}
void function2() {
    cout << "func2 also takes no args" << endl;
}