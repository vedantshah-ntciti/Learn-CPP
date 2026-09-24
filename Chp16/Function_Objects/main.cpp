#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>
#include <functional>
#include <iterator>
using namespace std;

int sumSquare( int total, int values )
{
    return total + values * values;
}

template < typename T > 
class SumSquaresClass 
{
    public: 
        T operator() ( const T &total , const T &value)
        {
            return total + value * value;
        }
};

int main()
{
    const size_t SIZE = 10;
    array < int , SIZE > integers;
    for ( int i = 0 ; i < 10; i ++ )
    {
        integers[i ] = i + 1;
    }

    ostream_iterator < int > output( cout , " ");

    cout << "array integers contains: ";
    copy( integers.cbegin() , integers.cend() , output);

    int result = accumulate( integers.cbegin() , integers.cend() , 0 , sumSquare);
    cout << "\n\nSum of squares of elements in integers using " << "binary\nfunction sumSquare: " << result;

    result =  accumulate( integers.cbegin() , integers.cend() , 0 , SumSquaresClass< int >());
    cout << "\n\nSum of squares of elements in integers using " << "binary\nfunction object of type " << "SumSquaresClass<int>: " << result << endl;
}
