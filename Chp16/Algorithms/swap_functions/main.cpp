#include <iostream>
#include <array>
#include <algorithm>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    const size_t SIZE = 10;
    array < int , SIZE > a;
    for (int i = 0; i < SIZE; i ++ )
    {
        a[i] = i + 1;
    }

    ostream_iterator < int > output( cout , " " );

    cout << "Array a contains:\n    ";
    copy( a.cbegin(),  a.cend() , output );

    swap( a[0] , a[1] );
    cout << "\nArray a after swapping a[0] and a[1] using swap:\n   ";
    copy( a.cbegin(),  a.cend() , output );

    iter_swap( a.begin(), a.begin() + 1);
    cout << "\nArray a after swapping a[0] and a[1] using iter_swap:\n  ";
    copy( a.cbegin(),  a.cend() , output );

    swap_ranges( a.begin() , a.begin() +5 , a.begin() + 5);

    cout << "\nArray a after swapping the first five elements\n" << "with  the last elements:\n     ";
    copy( a.cbegin(),  a.cend() , output );

    cout << endl;
}

