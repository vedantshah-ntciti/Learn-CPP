#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
    BasePlusCommissionEmployee employee("Sue", "Jones" , "214GADG", 10000, .06, 300);

    cout << fixed << setprecision(2);

    cout << employee.getFirstName() << " " <<  employee.getLastName() << "\n" << "Pan number is : " << employee.getPanNumber() << endl;
    cout << "Sales are: " << employee.getGrossSales() << "\nRate is " << employee.getCommissionRate() << "\nBase salary: " << employee.getBaseSalary() << endl;

    employee.setBaseSalary(1000);

    cout << "\nUpdated info is" << endl;
    employee.print();

    cout << "\n\nEarnings are" << endl;
    cout << employee.earnings() << endl;
    
}