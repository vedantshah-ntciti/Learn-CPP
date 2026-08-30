#include <iostream>
using namespace std;

int main()
{
    double x = 0.001234567;
    double y = 1.946e9;

    cout << "Displayed in default format:" << endl << x << '\t' << y << endl;

    cout << "\nDiplayed int scientific format: " << endl << scientific << x << '\t' << y << endl;

    cout << "\nDiplayed int fixed format: " << endl << fixed << x << '\t' << y << endl;

}
