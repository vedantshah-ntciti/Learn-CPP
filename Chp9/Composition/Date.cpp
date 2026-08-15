#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

Date::Date(int mn, int dy, int yr) 
{
    if (mn <= 0 || mn > monthsPerYear)
    {
        throw invalid_argument("month must be 1-12");
    }
    month = mn;

    year = yr;
    day = checkDay(dy);
}

void Date::print() const
{
    cout << month << "/" << day << "/" << year << endl;
}

Date::~Date()
{
    cout << "Date object destructor for date ";
    print();
    cout << endl;
}


unsigned int Date::checkDay(int testDay) const
{
    static const array<int , monthsPerYear+1> daysPerMonth = 
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (testDay > 0 && testDay <= daysPerMonth[month])
    {
        return testDay;
    }

    if (month == 2 && testDay==29 && (year%400 || (year%4==0 && year%100!=0)))
    {
        return testDay;
    }

    throw invalid_argument("Invalid day for current month and year");
}