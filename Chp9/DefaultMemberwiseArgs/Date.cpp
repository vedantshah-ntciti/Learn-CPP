#include <iostream>
#include "Date.h"
using namespace std;

Date::Date( int m , int d, int y) : month(m), year(y) , day(d)
{
}

void Date::print()
{
    cout << month << '/' << day << '/' << year << endl;
}