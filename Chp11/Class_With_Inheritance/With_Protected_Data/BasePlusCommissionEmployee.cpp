//dangerous, as baseclass can directly change value without functions, and without any base class restrictions
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
    cout << "commission employees: " << firstName << ' ' << lastName << "\nPAN: "  << PanNumber << "\ngross sales: " << grossSales << "\nCommissionRate: " << commissionRates << "\nBaseSalary: " << baseSalary << endl;
} 

double BasePlusCommissionEmployee::earnings() const
{
    return baseSalary + commissionRates*grossSales;
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