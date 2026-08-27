#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(const std::string &first, const std::string &last, const std::string &pan, double salary) : Employee(first, last, pan)
{
    setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double salary)
{
    if (salary < 0)
    {
        throw invalid_argument("Salary cannot be negative");
    }

    weeklySalary =  salary;
}

double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}

void SalariedEmployee::print() const
{
    cout << "Salaried employee: ";
    Employee::print();
    cout << "\nWeekly salary: " << getWeeklySalary() << endl;
}

double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
}