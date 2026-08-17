#include <iostream>
#include "Rectangle.h"
#include <stdexcept>
using namespace std;

int main()
{
    Rectangle r1(5.6, 10.5);
    try 
    {
        Rectangle r2(21, 4);
    } 
    catch (const invalid_argument& e)
    {
        cout << e.what() << endl;
    }
    try 
    {
        Rectangle r3(2, -4);
    } 
    catch (const invalid_argument& e)
    {
        cout << e.what() << endl;
    }
    cout << "\nArea is " << r1.getArea() << "\nPerimeter is : " << r1.getPerimeter() << endl;
}