#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
using namespace std;

int main()
{
    CommissionEmployee employee("Sue", "Jones" , "214GADG", 10000, .06);

    cout << fixed << setprecision(2);

    cout << employee.getFirstName() << " " <<  employee.getLastName() << "\n" << "Pan number is : " << employee.getPanNumber() << endl;
    cout << "Sales are: " << employee.getGrossSales() << "\nRate is " << employee.getCommissionRate() << endl;

    employee.setGrossSales(8000);
    employee.setCommissionRate(.1);

    cout << "\nUpdated info is" << endl;
    employee.print();

    cout << "\n\nEarnings are" << endl;
    cout << employee.earnings() << endl;
    
}