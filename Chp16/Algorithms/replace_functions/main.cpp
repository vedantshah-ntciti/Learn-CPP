#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
using namespace std;

bool greater9( int );

int main()
{
    const size_t SIZE = 10;
    array <int, SIZE> init = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };
    ostream_iterator < int > output(cout , " " );

    array < int , SIZE > a1(init);

    cout << "a1 before replacing all 10s:\n      ";
    copy( a1.cbegin() , a1.cend() , output );

    replace( a1.begin() , a1.end() , 10, 100);
    cout << "\na1 after replacing all 10s:\n    ";
    copy(a1.cbegin() , a1.cend() , output);

    array <int , SIZE > a2(init);
    array< int , SIZE > c1;

    cout << "\n\na2 before replacing 10s with 100s and copying\n   ";

    copy(a2.cbegin() , a2.cend() , output);

    replace_copy( a2.cbegin() , a2.cend() , c1.begin() , 10 , 100);
    cout << "\nc1 after repalcing all the 10s in a2:\n      ";
    copy(c1.cbegin() , c1.cend() , output);

    array <int , SIZE> a3(init);
    cout << "\n\na3 before replacing all elements greater than 9:\n      " ;
    copy( a3.cbegin() , a3.cend() , output );

    replace_if(a3.begin() , a3.end() , greater9 , 100);

    cout << "\na3 after removing all the elements greater than 9: \n    ";
    copy( a3.cbegin() , a3.cend() , output );

    array <int ,SIZE > a4(init);
    array <int , SIZE> c2;

    cout << "\na4 before replacing all elements"
        << "\ngreater than 9 and copying :\n    ";
    copy( a4.cbegin() , a4.cend() , output );

    replace_copy_if(a4.cbegin(), a4.cend() , c2.begin() , greater9 , 100);

    cout << "\na4 after replacing all elements"
        << "\ngreater than 9 and copying :\n    ";

    cout << endl;

}

bool greater9( int x)
{
    return x>9;
}
