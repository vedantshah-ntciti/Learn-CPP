#include <iostream>
#include "Time.h"
#include <iomanip>
#include <stdexcept>
using namespace std;

Time::Time(int hr, int mn, int sec)
{
    setTime(hr, mn, sec);
}

Time &Time::setTime(int hr, int mn, int sec)
{
    if (hr<0 || hr>=24)
    {
        throw invalid_argument("hour in range 0-23");
    }
    if (mn<0 || mn>=60)
    {
        throw invalid_argument("minute in range 0-59");
    }
    if (sec<0 || sec>=60)
    {
        throw invalid_argument("second in range 0-59");
    }

    hour = hr;
    minute = mn;
    second = sec;

    return *this;
}

Time &Time::setHour(int hr)
{
    if (hr<0 || hr>=24)
    {
        throw invalid_argument("hour in range 0-23");
    }
    hour = hr;
    return *this;
}

Time &Time::setMinute(int mn)
{
    if (mn<0 || mn>=60)
    {
        throw invalid_argument("minute in range 0-59");
    }
    minute = mn;
    return *this;
}

Time &Time::setSecond(int sec)
{
    if (sec<0 || sec>=60)
    {
        throw invalid_argument("second in range 0-59");
    }
    second = sec;
    return *this;
}

unsigned int Time::getHour() const
{
    return hour;
}

unsigned int Time::getMinute() const
{
    return minute;
}

unsigned int Time::getSecond() const
{
    return second;
}

void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << hour << ":" << setw(2)  << minute << ":"<< setw(2) << second << endl;
}

void Time::printStandard() const
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour%12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM") << endl;
}