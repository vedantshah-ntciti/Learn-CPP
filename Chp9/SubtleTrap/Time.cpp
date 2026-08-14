#include <stdexcept>
#include "Time.h"
using namespace std;

Time::Time(int h , int m , int s) 
{
    setTime(h,m,s);
}

void Time::setTime(int hr , int min, int sec)
{
    if ((hr>=24 || hr<0) || (min >= 60 || min<0) || (sec>=60 || sec<0))
    {
        throw invalid_argument("hour, minute, and/or second in entered out of range");
    }

    hour = hr;
    minute = min;
    second = sec;
}

unsigned int Time::getHour() const
{
    return hour;
}

unsigned int &Time::badSetHour(int hh)
{
    if (hh < 0 || hh >=24)
    {
        throw invalid_argument("Hour wrongly written");
    }

    //dangerous 
    return hour;
}