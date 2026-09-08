#include <iostream>
#include <array>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

template < typename T > void printList(const list<T> &listRef);

int main()
{
    const size_t SIZE = 4;
    array <int , SIZE > ints=  {2,4,6,8};
    list <int> values;
    list <int> othervalues;

    values.push_front(1);
    values.push_front(2);
    values.push_back(4);
    values.push_back(3);

    cout << "values contains: ";
    printList(values);

    values.sort();
    cout << "\nvalues after sorting contains: ";
    printList(values);

    othervalues.insert(othervalues.cend() , ints.cbegin() , ints.cend());
    cout << "\nAfter insert , othervalues contains: ";
    printList(othervalues);

    values.splice(values.cend() , othervalues);
    cout << "\nAfter splice, values contains: ";
    printList(values);

    values.sort();
    cout << "\nAfter sort, values contains: ";
    printList(values);

    othervalues.insert(othervalues.cbegin() , ints.cbegin() , ints.cend());
    othervalues.sort();
    cout << "\nAfter insert and sort, othervalues contains: ";
    printList(othervalues);

    values.merge(othervalues);
    cout << "\nAfter merge:\n    values contains: ";
    printList(values);
    cout << "\nAfter    othervalues contains: ";
    printList(othervalues);

    values.pop_front();
    values.pop_back();

    cout << "\nAfter pop_front and pop_back: \n     values contains: ";
    printList(values);

    values.unique();
    cout << "\nAfter unique, values contains:";
    printList(values);

    values.swap(othervalues);
    cout << "\nAfter swap:\n    values contains: ";
    printList(values);
    cout << "\nAfter    othervalues contains: ";
    printList(othervalues);

    values.assign(othervalues.cbegin() , othervalues.cend());
    cout << "\nAfter assign, values contains: ";
    printList(values);

    values.merge(othervalues);
    cout << "\nAfter merge:\n    values contains: ";
    printList(values);

    values.remove(4);
    cout << "\nAfter remove(4) , values contains: ";
    printList(values);
    cout  << endl;
}


template < typename T > void printList(const list<T> &listRef)
{
    if (listRef.empty() ) 
    {
        cout << "List is empty" << endl;
    }
    else
    {
        ostream_iterator<T> output(cout, " ");
        copy(listRef.cbegin() , listRef.cend() , output);
    }
}
