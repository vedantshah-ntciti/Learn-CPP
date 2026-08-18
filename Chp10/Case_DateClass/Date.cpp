#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

const array<unsigned int, 13> Date::days = {0,31,28,31,30,31,30,31,31,30,31,30,31};

Date::Date(int month, int day, int year)
{
    setDate(month, day, year);
}

void Date::setDate(int mm, int dy, int yr)
{
    if (mm<1 || mm > 12)
    {
        throw invalid_argument("Month must be 1-12" );
    }
    month = mm;

    if (yr>2100 || yr < 1900)
    {
        throw invalid_argument("Year must be 1900-2100" );
    }
    year = yr;

    if ((month == 2 && leapyear(year) && dy >= 1 && dy <= 29) || (dy >= 1 && dy <= days[month]))
    {
        day = dy;
    }
    else
    {
        throw invalid_argument("Day is out of range for given month and year" );
    }
}

Date &Date::operator++()
{
    helpIncrement();
    return *this;
}

Date Date::operator++(int)
{
    Date temp = *this;
    helpIncrement();

    return temp;
}

Date &Date::operator+=(unsigned int additionalDays )
{
    for (int i = 0 ; i < additionalDays ; i++)
    {
        helpIncrement();
    }

    return *this;
}

bool Date::leapyear(int testYear)
{
    if (testYear%400 == 0 || (testYear%100 != 0 && testYear%4 == 0))
    {
        return true;
    }

    return false;
}

bool Date::endOfMonth(int testDay) const
{
    if (month == 2 && leapyear(year))
    {
        return testDay == 29;
    }
    return testDay == days[month];
}

void Date::helpIncrement()
{
    if (!endOfMonth(day))
    {
        ++day;
    }
    else
    {
        if (month < 12) 
        {
            ++month;
            day = 1;
        }
        else
        {
            ++year;
            month = 1;
            day = 1;
        }
    }
}

ostream &operator<<(ostream &output, const Date &d)
{
    static string monthName[13] = {"" , "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    output << monthName[d.month] << ' ' << d.day << ", " << d.year;
    return output;
}


