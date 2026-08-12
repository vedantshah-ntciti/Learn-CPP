#include <iostream>
using namespace std;

inline double cube(const double side) {
    return side*side*side;
}

int main() {
    double sideVal;
    cout << "Enter val of sideVal and display result ";
    cin >> sideVal;

    cout << "Volume of cube with side " << sideVal << " is " << cube(sideVal) << endl;
}