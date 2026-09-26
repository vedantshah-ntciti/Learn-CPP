#include <iostream>
#include <array>
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

    auto endLocation = unique( values.begin() , values.end() );
    copy( values.begin() , endLocation , output);
    cout << endl;
}
