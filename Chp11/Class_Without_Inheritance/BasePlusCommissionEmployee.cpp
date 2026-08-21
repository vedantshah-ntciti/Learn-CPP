#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string & first, const string & last, const string & pan, double sales, double rate , double salary)
{
    firstName = first;
    lastName = last;
    PanNumber = pan;
    setGrossSales(sales);
    setCommissionRate(rate);
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setFirstName(const string & first)
{
    firstName = first;
} 

string BasePlusCommissionEmployee::getFirstName() const
{
    return firstName;
} 

void BasePlusCommissionEmployee::setLastName(const string & last)
{
    lastName = last;
}

string BasePlusCommissionEmployee::getLastName() const
{
    return lastName;
} 

void BasePlusCommissionEmployee::setPanNumber(const string & pan)
{
    PanNumber = pan;
} 

string BasePlusCommissionEmployee::getPanNumber() const
{
    return PanNumber;
}  

void BasePlusCommissionEmployee::setGrossSales( double sales) 
{
    if (sales <0 )
    {
        throw invalid_argument("Gross sales must be greater than 0");
    }

    grossSales = sales;
} 

double BasePlusCommissionEmployee::getGrossSales() const
{
    return grossSales;
} 

void BasePlusCommissionEmployee::setCommissionRate(double rate)
{
    if (rate < 0.0 || rate> 1.0) 
    {
        throw invalid_argument("Rate must be between 0-1");
    }

    commissionRates = rate;
} 

double BasePlusCommissionEmployee::getCommissionRate() const
{
    return commissionRates;
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