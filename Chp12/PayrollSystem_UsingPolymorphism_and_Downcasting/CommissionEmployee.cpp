#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const std::string &first,const std::string &last,const std::string &pan, double sales, double rate) : Employee(first, last, pan)
{
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setGrossSales(double sales)
{
    if (sales < 0)
    {
        throw invalid_argument("Sales cannot be negative");
    }

    grossSales =  sales;
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
    if (rate < 0.0 && rate < 1.0)
    {
        throw invalid_argument("Rate must be between 0-1");
    }

    commissionRate =  rate;
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

void CommissionEmployee::print() const
{
    cout << "Commission employee: ";
    Employee::print();
    cout << "\ngross sales : " << getGrossSales() << "; commission rate: " << getCommissionRate() << endl;
}

double CommissionEmployee::earnings() const
{
    return getGrossSales() * getCommissionRate();
}