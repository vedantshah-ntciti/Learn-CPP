#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    const size_t SIZE = 10;
    array < int, SIZE > a = { 2,2,4,4,4,6,6,6,6,8};
    ostream_iterator < int > output( cout , " " );

    cout << "array a contains:\n";
    copy( a.cbegin() , a.cend() , output );

    auto lower = lower_bound( a.cbegin() , a.cend() , 6 );
    cout << "\n\nlower bound of 6 is element " 
        << ( lower - a.cbegin() ) << "  of array a";

    auto upper = upper_bound( a.cbegin() , a.cend() , 6 );
    cout << "\n\nupper bound of 6 is element " 
        << ( upper - a.cbegin() ) << "  of array a";

    auto eq = equal_range( a.cbegin() , a.cend() , 6 );
    cout << "\nUsing equal range:\n     Lower bound of 6 is element " << ( eq.first - a.cbegin() ) << " of array a";
    cout << "\n     Upper bound of 6 is element " << ( eq.second - a.cbegin() ) << " of array a";

    cout << "\n\nUse lower_bound to locate the first point\n" << "at which 5 can be inserted in order";
    lower = lower_bound(a.cbegin() , a.cend() , 5);
    cout << "\nlower bound of 5 is element " 
        << ( lower - a.cbegin() ) << "  of array a";

    cout << "\n\nUse upper_bound to locate the first point\n" << "at which 7 can be inserted in order";
    upper = upper_bound(a.cbegin() , a.cend() , 7);
    cout << "\nupper bound of 7 is element " 
        << ( upper - a.cbegin() ) << "  of array a";

    eq = equal_range( a.cbegin() , a.cend() , 5 );
    cout << "\nUsing equal range:\n     Lower bound of 5 is element " << ( eq.first - a.cbegin() ) << " of array a";
    cout << "\n     Upper bound of 5 is element " << ( eq.second - a.cbegin() ) << " of array a";
    cout << endl;
} 
