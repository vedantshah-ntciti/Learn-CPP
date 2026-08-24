#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
    CommissionEmployee commissionEmployee("Sue" , "Jones", "ASFA664", 10000, .06);
    
    CommissionEmployee *commissionEmployeePtr = nullptr;

    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob" , "Ken" , "EGIJ5023" , 5000 , .04, 300);

    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = nullptr;

    cout << fixed << setprecision(2);

    cout << "Invoking print function on base-class and derived-class " << "\nobjects with statics bindings\n\n";

    commissionEmployee.print();
    cout << "\n\n";

    basePlusCommissionEmployee.print();

    cout << "\n\nInvoking print function on base-class and derived-class " << "\nobjects with dynamic bindings\n\n";
    commissionEmployeePtr=  &commissionEmployee;
    cout << "\n\nCalling virtual function print with base-class pointer" <<"\nto base-class object invokes base-class" << " print function:\n\n";
    commissionEmployeePtr->print();

    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling virtual function print with base-class pointer" <<"\nto base-class object invokes base-class" << " print function:\n\n";
    basePlusCommissionEmployeePtr->print();

    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling virtual function print with base-class pointer" << "\nto derived-class object invokes derived class " << "print function:\n\n";

    commissionEmployeePtr->print();

}