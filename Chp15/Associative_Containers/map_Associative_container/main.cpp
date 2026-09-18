#include <iostream>
#include <map>
using namespace std;

int main()
{
    map < int, double, less< int > > pairs;
    pairs.insert( make_pair(15, 2.7));

    pairs.insert( make_pair( 10 , 22.22));
    pairs.insert( make_pair( 25 , 33.333));
    pairs.insert( make_pair( 20,  9.345));
    pairs.insert( make_pair(  5,  77.54));
    pairs.insert( make_pair( 15 , 99.3));

    cout << " pairs contains:\nKey\tValues\n";

    for ( auto mapItem : pairs )
    {
        cout << mapItem.first << "\t"  << mapItem.second << "\n";
    }

    pairs[25] = 999.99;
    pairs[40] = 8765.43;

    cout << "\nAfter subcript operations,  pairs contains:\nKey\tValues\n";

    for ( auto mapItem : pairs )
    {
        cout << mapItem.first << "\t"  << mapItem.second << "\n";
    }

    cout << endl;
}
