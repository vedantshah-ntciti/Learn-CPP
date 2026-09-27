#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

void customNewHandler() 
{
    cerr << "customNewHandler was called";
    abort();
}

int main()
{
    double *ptr[ 500 ];

    set_new_handler( customNewHandler );

    for ( size_t i = 0; i < 500; ++i )
    {
        ptr[i] = new double[10000000000];
        cout << "ptr[" << i << "] points to 10000,000,000 new doubles\n";
    }
}
