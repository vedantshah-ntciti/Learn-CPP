#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    const size_t SIZE = 10;
    array < int , SIZE > a1 = { 1, 3, 5, 7, 9 , 1, 3, 5, 7 ,9};
    ostream_iterator < int > output( cout , " " );

    cout << "Array a1 contains: ";
    copy( a1.cbegin(),  a1.cend() , output );

    inplace_merge( a1.begin() , a1.begin() + 5 , a1.end() );

    cout << "\nAfter inplace_merge, a1 contains: ";
    copy( a1.cbegin(),  a1.cend() , output );

    vector < int > results1;

    unique_copy( a1.cbegin() , a1.cend() , back_inserter( results1 )) ;
    cout << "\nAfter unique_copy results1 contains: ";
    copy( results1.cbegin(),  results1.cend() , output );

    vector < int > results2;

    reverse_copy( a1.cbegin() , a1.cend() , back_inserter( results2 ) );
    cout << "\nAfter reverse_copy, results2 contains: ";
    copy( results2.cbegin(),  results2.cend() , output );

    cout << endl;
}
