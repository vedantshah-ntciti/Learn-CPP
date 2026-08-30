#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int x = 10000;

    cout << x << " printed as int right and left justitified\n"
       << "and as hex with internal justification.\n"
       << "Using the default pad character (space): " << endl;

    cout << showbase << setw(10) << x << endl;

    cout << left << setw(10) << x << endl;

    cout << internal << setw(10) << hex << x << endl;

    cout << "Using various padding character: " << endl;

    cout << right;

    cout.fill('*');
    cout << setw(10) << dec << x << endl;

    cout << left << setw(10) << setfill('%') << x << endl;

    cout << internal << setw(10) << setfill('^') << hex << x << endl;
}
