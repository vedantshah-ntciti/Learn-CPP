#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string & first, const string & last, const string & pan, double sales, double rate ) 
{
    firstName = first;
    lastName = last;
    PanNumber = pan;
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setFirstName(const string & first)
{
    firstName = first;
} 

string CommissionEmployee::getFirstName() const
{
    return firstName;
} 

void CommissionEmployee::setLastName(const string & last)
{
    lastName = last;
}

string CommissionEmployee::getLastName() const
{
    return lastName;
} 

void CommissionEmployee::setPanNumber(const string & pan)
{
    PanNumber = pan;
} 

string CommissionEmployee::getPanNumber() const
{
    return PanNumber;
}  

void CommissionEmployee::setGrossSales( double sales) 
{
    if (sales <0 )
    {
        throw invalid_argument("Gross sales must be greater than 0");
    }

    grossSales = sales;
} 

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
} 

void CommissionEmployee::setCommissionRate(double rate)
{
    if (rate < 0.0 || rate> 1.0) 
    {
        throw invalid_argument("Rate must be between 0-1");
    }

    commissionRates = rate;
} 

double CommissionEmployee::getCommissionRate() const
{
    return commissionRates;
} 

void CommissionEmployee::print() const
{
    cout << "commission employees: " << firstName << ' ' << lastName << "\nPAN: "  << PanNumber << "\ngross sales: " << grossSales << "\nCommissionRate: " << commissionRates;
} 

double CommissionEmployee::earnings() const
{
    return commissionRates*grossSales;
} 