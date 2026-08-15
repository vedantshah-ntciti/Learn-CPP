#ifndef TIME_H
#define TIME_H

class Time
{
    public: 
        Time(int = 0 , int  = 0, int = 0);
        void setHour(int);
        void setTime(int , int, int);
        unsigned int getHour() const;
        unsigned int getMinute() const;
        void printUniversal() const;
        void printStandard() const;
    public:
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
};

#endif