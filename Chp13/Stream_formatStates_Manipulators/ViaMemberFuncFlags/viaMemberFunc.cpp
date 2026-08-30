#include <iostream> 
using namespace std;

int main()
{
    int integerValue = 1000;

    double doubleValue = .0947628;

    cout << "The value of the flags variable is: " << cout.flags() << "\nPrint int and double in original format:\n"
        <<integerValue << '\t' << doubleValue << endl << endl;

    ios_base::fmtflags originalFormat = cout.flags();

    cout << showbase << oct << scientific;

    cout << "The value of the flags variable is:" << cout.flags() << "\nPrint int and double in a new format:\n" 
        << integerValue << '\t' << doubleValue << endl;

    cout.flags(originalFormat);

    cout << "The restored value of the flags is:\n" << cout.flags() << "\nPrint values in original format again:\n"
        << integerValue << '\t' << doubleValue << endl;
}
