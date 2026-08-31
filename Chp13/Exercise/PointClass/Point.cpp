#include <iostream>
#include "Point.h"
using namespace std;

std::ostream &operator<<(std::ostream &output , const Point & point)
{
    if (point.goodExt == true)
    {
        output << "(" << point.xCood << " , " << point.yCood << ")" << endl;
    }
    return output;
}

std::istream &operator>>(std::istream &input , Point & point)
{
    input >> point.xCood;
    input >> point.yCood;
    if (input.fail())
    {
        point.goodExt = false;
    }
    return input;
}
