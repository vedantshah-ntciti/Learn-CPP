#include <iostream>
#include "PhoneNumber.h"
#include <string>
using namespace std;

ostream &operator<<(ostream &output , const PhoneNumber &number)
{
    output << "(" << number.areaCode << ") " << number.exchange << "-" << number.line;
    return output;
}

istream &operator>>(istream &input  , PhoneNumber &number)
{
    const int ActualLength = 14;
    char phoneEnter[ActualLength + 1] = {0};

    input.read(phoneEnter, ActualLength);

    if (input.gcount() != ActualLength) 
    {
        input.clear(ios_base::failbit);
        return input;
    }

    if (phoneEnter[0] == '(' && phoneEnter[4] == ')' && phoneEnter[5] == ' ' && phoneEnter[9] == '-')
    {
        input.clear(ios_base::failbit);
        return input;
    }

    int multiply = 1;
    for (int i = 1; i <= 3; i++)
    {
        number.areaCode = (phoneEnter[i]-'0')*multiply;
        multiply *= 10;
    }

    multiply = 1;
    for (int i = 1; i <= 3; i++)
    {
        number.exchange = (phoneEnter[i+5]-'0')*multiply;
        multiply *= 10;
    }

    multiply = 1;
    for (int i = 1; i <= 4; i++)
    {
        number.line = (phoneEnter[i+9]-'0')*multiply;
        multiply *= 10;
    }
    return input;
}
