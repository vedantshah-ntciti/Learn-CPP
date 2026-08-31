#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point  
{
    friend std::ostream &operator<<(std::ostream &, const Point &);
    friend std::istream &operator>>(std::istream &, Point &);

    private:
        int xCood;
        int yCood;
        bool goodExt = true;
};

#endif
