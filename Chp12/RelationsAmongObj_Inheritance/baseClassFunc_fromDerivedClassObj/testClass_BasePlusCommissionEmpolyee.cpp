#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
using namespace std;

int main()
{
    CommissionEmployee employee("Sue", "Jones" , "214GADG", 10000, .06);

    CommissionEmployee *commissionEmployeePtr = nullptr;

    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob" , "Ken" , "DIJ1931" , 5000, .04, 300);

    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = nullptr;

    cout << fixed << setprecision(2);

    cout << "Print base-class and derived class objects:\n\n";
    employee.print();
    cout << "\n\n";
    basePlusCommissionEmployee.print();

    commissionEmployeePtr = &employee;
    cout << "\n\nCalling print with base class pointer to " << "\nbase-class object invokes base-class print function:\n\n";
    commissionEmployeePtr->print();

    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling print with derived class pointer to " << "\nderived-class object invokes derived-class print function:\n\n";
    basePlusCommissionEmployeePtr->print();

    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling print with base class pointer to " << "\nderived-class object \ninvokes base-class print function: " ;
    cout << "function on that derived class on that derived class object:\n\n";
    commissionEmployeePtr->print();

    cout << endl;
}