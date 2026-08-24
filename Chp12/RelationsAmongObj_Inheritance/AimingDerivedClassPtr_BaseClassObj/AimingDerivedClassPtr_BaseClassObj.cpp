#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"

int main()
{
    CommissionEmployee commissionEmployee("Sue", "Jones", "ASF234", 10000, .06);
    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = nullptr;
    
    //supposed to throw error
    basePlusCommissionEmployeePtr = &commissionEmployee;
}