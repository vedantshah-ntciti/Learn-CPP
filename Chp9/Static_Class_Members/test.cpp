#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    cout << "Number of employees before instantiation of any object is " << Employee::getCount() << endl;

    {
        Employee e1("Susan" , "Baker");
        Employee e2("Robert" , "Jones");

        cout << "Number of employees after instantiation of any object is " << Employee::getCount() << endl;

        cout << "\n\nEmployee 1:  " << e1.getFirstName() << " " << e1.getLastName() << endl;
        cout << "\n\nEmployee 2:  " << e2.getFirstName() << " " << e2.getLastName() << endl;
    }


    cout << "\nNumber of employees after objects are deleted is " << Employee::getCount() << endl;
}