#include <iostream>
#include <new>
using namespace std;

int main()
{
    double *ptr[100];

    try 
    {
        for ( size_t i = 0; i < 100; ++i )
        {
            ptr[i] = new double[10000000000];
            cout << "ptr[" << i << "] points to 10,000,000,000 new double\n";
        }
    }
    catch ( bad_alloc &memoryAllocationException )
    {
        cerr << "Exception occured: " << memoryAllocationException.what() << endl;
    }
}
