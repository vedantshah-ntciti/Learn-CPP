#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    unsigned int numberOfEmployees;
    cout << "Enter Number of Employees: " << endl;
    cin >> numberOfEmployees;

    cout <<  endl;

    array <int , 9> salaries = {};
    for (unsigned int i = 0; i< numberOfEmployees; i++ )
    {
        unsigned int salary;
        cout << "enter salary of employee " << i+1 << ": ";
        cin >> salary;
        while (salary < 200)
        {
            cerr << "Enter a valid salary" << endl;
            cin >> salary;
        }
        cout << endl;
        if (salary < 1000) 
        {
            salaries[ static_cast <int> (salary-200)/100]++;
        }
        else{
            salaries[salaries.size()-1]++;
        }
        cout << endl;
    }

    cout << "Salary range" << setw(13) << "Count" << endl;
    for (size_t i = 0; i < salaries.size() -1 ; i++)
    {
        cout << setw(7) << 200+100*i << "-" << 200+ 100*i+ 99 << setw(13) << salaries[i]<< endl;
    }
    cout << setw(7) << ">" << 200+100*(salaries.size()-1)  << setw(13) << salaries[salaries.size()-1]<< endl;
    cout << endl;
}