#include "Time.h"
#include <stdexcept>
#include <iostream>
using namespace std;

int main() 
{
    Time t;

    cout << "The universal time is ";
    t.printUniversal();
    cout << "\nThe standard time is ";
    t.printStandard();

    t.setTime(13,27,6);

    cout << "\n Setting new time\n";
    cout << "The universal time is ";
    t.printUniversal();
    cout << "\nThe standard time is ";
    t.printStandard();

    try 
    {
        t.setTime(99,99,99);
    }
    catch (invalid_argument &e)
    {
        cout << "\nException: " << e.what() << endl;
    }
    
    cout << "\n\nAfter attempting invalid settings:" << "\nUniversal time:";
    t.printUniversal();
    cout << "\nStandard time:";
    t.printStandard();
    cout << endl;
}