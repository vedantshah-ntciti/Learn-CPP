#include <iostream>
#include "Rectangle.h"
#include <stdexcept>
using namespace std;

Rectangle::Rectangle(float l, float b)
{
    setParameter(l,b);
}

void Rectangle::setParameter(float l, float b)
{
    setLength(l);
    setBreadth(b);
}

void Rectangle::setLength(float l)
{
    if (l > 20.0 || l < 0.0) 
    {
        throw invalid_argument("l must be between 0-20");
    }
    length = l;
}

void Rectangle::setBreadth(float b)
{
    if (b > 20.0 || b < 0.0) 
    {
        throw invalid_argument("b must be between 0-20");
    }
    breadth = b;
}

float Rectangle::getArea() const
{
    return length*breadth;
}

float Rectangle::getPerimeter() const
{
    return 2*(length+breadth);
}

float Rectangle::getLength() const
{
    return length;
}

float Rectangle::getBreadth() const
{
    return breadth;
}