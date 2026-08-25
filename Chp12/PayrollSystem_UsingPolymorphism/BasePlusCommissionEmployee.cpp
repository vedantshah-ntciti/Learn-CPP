#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string &first,const std::string &last,const std::string &pan, double sales, double rate, double salary) : CommissionEmployee(first, last, pan, sales, rate)
{
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if (salary < 0)
    {
        throw invalid_argument("Salary cannot be negative");
    }

    baseSalary =  salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
    return baseSalary + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried " ;
    CommissionEmployee::print();
    cout << "; Base salary: " << getBaseSalary() << endl;
}