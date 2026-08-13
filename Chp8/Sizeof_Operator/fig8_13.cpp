#include <iostream>
using namespace std;

size_t getSize( double *);

int main()
{
    double numbers[20];

    cout << "The number of bytes in the array is " << sizeof(numbers);

    cout << "\nThe number of bytes returned by getSize is " << getSize(numbers) << endl;
}

size_t getSize( double *ptr)
{
    //returns size of pointer , not the array
    return sizeof(ptr);
}
