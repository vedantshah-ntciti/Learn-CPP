#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t;

    //cascaded func calls
    t.setHour(18).setMinute(30).setSecond(22);

    cout << "Universal Time: ";
    t.printUniversal();

    cout << "\nStandard Time: ";
    t.setTime(20,20,20).printStandard();
}