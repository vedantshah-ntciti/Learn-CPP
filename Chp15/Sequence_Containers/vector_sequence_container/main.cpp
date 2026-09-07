#include <iostream>
#include <vector>
using namespace std;

template <typename T> void printVector( const vector <T> &integers2);

int main()
{
    const size_t SIZE = 6;
    int values[ SIZE ] = {1,2,3,4,5,6};
    vector <int> integers;

    cout << "The initial size of integers is: " << integers.size()
        << "\nThe initial capacity of integers is: " << integers.capacity();

    integers.push_back(2);
    integers.push_back(3);
    integers.push_back(4);

    cout << "\nThe size of integers 1: " << integers.size()
        << "\nThe capacity of integers is: " << integers.capacity();
    cout << "\n\nOutput built-in array using pointer notation: " << endl;

    for (const int *ptr = begin(values) ; ptr!= end(values); ++ptr )
    {
        cout << *ptr << " ";
    }
    cout << endl;
    
    cout << "\nOutput vector using iterator notation: " << endl;
    printVector(integers);
    cout << "\nReversed contents of vector integers: " << endl;

    for (auto reverseInterator = integers.crbegin(); reverseInterator != integers.crend(); ++reverseInterator)
    {
        cout << *reverseInterator << " ";
    }

    cout << endl;

    integers.push_back(2);
    integers.push_back(3);
    
    cout << "\nThe size of integers 1: " << integers.size()
        << "\nThe capacity of integers is: " << integers.capacity();
    cout << "\n\nOutput built-in array using pointer notation: " << endl;

    cout << "\nOutput vector using iterator notation: " << endl;
    printVector(integers);
}

template <typename T> void printVector( const vector <T> &integers2)
{
    // can also use (auto const &item: integers2)
    for (auto constIterator = integers2.begin(); constIterator != integers2.end(); ++constIterator)
    {
        cout << *constIterator << " ";
    }
    cout << endl;
}
