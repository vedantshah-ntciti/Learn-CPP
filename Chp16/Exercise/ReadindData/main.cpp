#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() 
{
    vector < int > values;
    istream_iterator<int> input;
    ifstream inputFile( "integers.txt" );
    copy( istream_iterator<int>(inputFile), istream_iterator<int>(), back_inserter(values));

    for ( int item : values )
    {
        cout << item << " ";
    }

    cout << endl;
}
