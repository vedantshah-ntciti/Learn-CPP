#include <iostream>
#include "FunctionTemplateMaximumHeader.h"
using namespace std;

int main() {
    int i1,i2,i3;
    cout << "Input three numbers:  ";
    cin >> i1 >> i2 >> i3;

    cout << "The maximum int value is "<< maximum(i1,i2,i3) << endl;

    double d1,d2,d3;
    cout << "Input three double numbers:  ";
    cin >> d1 >> d2 >> d3;

    cout << "The maximum double value is "<< maximum(d1,d2,d3) << endl;

    char c1,c2,c3;
    cout << "Input three char numbers:  ";
    cin >> c1 >> c2 >> c3;

    cout << "The maximum char value is "<< maximum(c1,c2,c3) << endl;
}