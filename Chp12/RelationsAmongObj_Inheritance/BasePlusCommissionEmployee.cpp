//Supposed to throw compiler as derived class cannot access base class private members
#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string & first, const string & last, const string & pan, double sales, double rate , double salary) : CommissionEmployee(first, last, pan, sales, rate)
{
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried ";

    CommissionEmployee::print();

    cout << "\nbase salary: " << getBaseSalary();
} 

double BasePlusCommissionEmployee::earnings() const
{
    return baseSalary + CommissionEmployee::earnings();
} 

double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if (salary < 0)
    {
        throw invalid_argument("baseSalary cannot be negative");
    }

    baseSalary = salary;
}