#include <iostream>
using namespace std;

int main()
{
    bool booleanValue = true;
    cout << "boolValue after boolalpha is : " << boolalpha << booleanValue << endl << endl;

    cout << "after noboolalpha is: " << noboolalpha << booleanValue << endl << endl;
     
    booleanValue = false;

    cout << "boolValue after boolalpha is : " << boolalpha << booleanValue << endl << endl;

    cout << "after noboolalpha is: " << noboolalpha << booleanValue << endl << endl;
}
