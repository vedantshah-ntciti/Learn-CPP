#include <string>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
using namespace std;

int main()
{
    CommissionEmployee *commissionEmployeePtr = nullptr;
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob" , "Ken" , 5000 , .04 , 300);

    commissionEmployeePtr = &basePlusCommissionEmployee;

    string firstName = commissionEmployeePtr->getFirstName();
    string lastName = commissionEmployeePtr->getLastName();
    string pan = commissionEmployeePtr->getPanNumber();
    double grossSales = commissionEmployeePtr->getGrossSales();
    double rate = commissionEmployeePtr->getCommissionRate();

    //not allowed to call derived class funtions exclusicve ones
    double baseSalary = commissionEmployeePtr->getBaseSalary();
    commissionEmployeePtr->setBaseSalary(500);
}