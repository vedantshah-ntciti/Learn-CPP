#include <iostream>
using namespace std;

int cubeByValue(int);
void cubeByRefer(int *);

int main() 
{
    int number = 5;
    int *nPtr = &number;
    cout << "The original number value is " << number << endl;

    number = cubeByValue(number);
    cout << "The new value is using return : " << number << endl;
    cubeByRefer(nPtr);
    cout << "The new value is using ref : " << number << endl;
}

int cubeByValue(int n)
{
    return n*n*n;
}

void cubeByRefer(int *nPtr)
{
    *nPtr = *nPtr * (*nPtr) * (*nPtr);
}