#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

void virtualViaPointer(const Employee * const);
void virtualViaReference(const Employee &);

int main()
{
    cout << fixed << setprecision(2);

    SalariedEmployee salariedEmployee("John", "Smith" , "1111-11-111", 800);

    CommissionEmployee commissionEmployee("Sue" , "Jones" , "333-33-3333", 10000, .06);

    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob" , "Ken" , "444-44-4444", 5000, .04, 300);

    cout << "Employees processed individually using static bindings:\n\n";

    salariedEmployee.print();
    cout << " Earned : " << salariedEmployee.earnings() << endl;
    commissionEmployee.print();
    cout << " Earned : " << commissionEmployee.earnings() << endl;
    basePlusCommissionEmployee.print();
    cout << " Earned : " << basePlusCommissionEmployee.earnings() << endl;
    cout <<"\n\n";

    vector <Employee *> employees(3);

    employees[0] = &salariedEmployee;
    employees[1] = &commissionEmployee;
    employees[2] = &basePlusCommissionEmployee;

    cout << "Employee processed polymorphically via dyanmic bindings:\n\n";

    cout << "Virtual funtions call via base-class pointers\n\n";

    for (const Employee *employeePtr : employees)
    {
        virtualViaPointer(employeePtr);

    }
    
    cout << "Virtual funtions call via base-class References\n\n" ;

    for (const Employee *employeePtr : employees)
    {
        virtualViaReference(*employeePtr);
    }
}

void virtualViaPointer(const Employee * const baseClassPtr)
{
    baseClassPtr->print();
    cout << " Earned: " << baseClassPtr->earnings() << endl;
}

void virtualViaReference(const Employee &baseClassPtr)
{
    baseClassPtr.print();
    cout << " Earned: " << baseClassPtr.earnings() << endl;

}
