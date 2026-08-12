#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector <int> &);
void inputVector(vector <int> &);

int main()
{
    vector <int> int1(7);
    vector <int> int2(10);

    cout << "Size of vector integers1 is " << int1.size() << "\nvector after intitialization" << endl;
    outputVector(int1);

    cout << "Size of vector integers2 is " << int2.size() << "\nvector after intitialization" << endl;
    outputVector(int2);

    cout << "Enter " << int1.size() + int2.size() << " integers: " << endl;
    inputVector(int1);
    inputVector(int2);

    cout << "\nAfter input vector contain:\n" << "int1: " << endl;
    outputVector(int1);

    cout << "int2: " << endl;
    outputVector(int2);

    if (int1 != int2)
    {
        cout << "int1 is not equal to int2" << endl;
    }

    vector <int> int3(int1);
    cout << "Printing int3: " << endl;
    outputVector(int3);

    cout << "Assigning int1 to int2" <<  endl;
    int2 = int1;

    cout << "int1: " << endl;
    outputVector(int1);
    cout << "int2: " << endl;
    outputVector(int2);

    cout << "\nEvaluating: int1 == int2" <<  endl;
    if (int1 == int2)
    {
        cout << "int1 is equal to int2" << endl;
    }

    cout << "Attempting to access out of range subscript" << endl;
    try
    {
        cout << "\nAttempt to display int1.at(15)" << endl;
        cout << int1.at(15) << endl;
    }
    catch (out_of_range &ex)
    {
        cerr << "An exception occured: " << ex.what() << endl;
    }

    cout << "appending in int3" << endl;
    int3.push_back(1000);
    cout << "New int3 size is: " << int3.size() << endl;
    cout << "int3 now contains: ";
    outputVector(int3);    
}

void outputVector(const vector <int> & array)
{
    for (int item : array)
    {
        cout << item << " ";
    }
    cout << endl;
}
void inputVector(vector <int> &array)
{
    for (int &item : array)
    {
        cin >> item;
    }
    cout << endl;
}