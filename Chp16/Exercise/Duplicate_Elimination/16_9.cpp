#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    cout << "Input 20 integers" << endl;
    array<int , 20> values;
    ostream_iterator<int> output( cout , " ");

    for ( int i = 0 ; i < 20 ; i++ )
    {
        cin >> values[i];
    }
    
    sort( values.begin() , values.end() );

    vector < int > uniqueVals;

    unique_copy( values.cbegin() , values.cend() , back_inserter( uniqueVals ) );

    copy( uniqueVals.cbegin() , uniqueVals.cend() , output );
    cout << endl;
}
