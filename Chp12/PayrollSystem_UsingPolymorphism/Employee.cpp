#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(std::string & first,std::string &last,std::string &pan) : firstName(first), lastName(last), PANnumber(pan)
{

}

void Employee::setFirstName( const std::string &first)
{
    firstName = first;
}

std::string Employee::getFirstName() const
{
    return firstName;
} 

void Employee::setLastName( const std::string &last)
{
    lastName = last;
}

std::string Employee::getLastName() const
{
    return lastName;
} 

void Employee::setPANnumber( const std::string &pan)
{
    PANnumber = pan;
}

std::string Employee::getPANnumber() const
{
    return PANnumber;
} 

void Employee::print() const
{
    cout << getFirstName() << ' ' << getLastName() << "\nPAN number: " << getPANnumber();
    cout << endl;
}