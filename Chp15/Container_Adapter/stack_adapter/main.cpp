#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

template <typename T> void pushElements( T &stackRef );

template <typename T> void popElements( T &stackRef );

int main()
{
    stack< int > intDequeStack;

    stack<int , vector<int>> intVectorStack;

    stack< int  ,list<int>> intListStack;

    cout << endl<< "Pushing onto intDequeStack: " ;
    pushElements(intDequeStack);

    cout << endl << "Pushing onto intVectorStack: ";
    pushElements(intVectorStack);

    cout << endl << "Pushing onto intListStack: ";
    pushElements(intListStack);

    cout << endl << endl;

    cout << endl << "Popping from intDequeStack: ";
    popElements(intDequeStack);

    cout << endl << "Popping from intVectorStack: ";
    popElements(intVectorStack);

    cout << endl << "Popping from intListStack: ";
    popElements(intListStack);

    cout << endl << endl;
}

template <typename T> void pushElements( T &stackRef )
{
    for ( int i = 0; i < 10; i++ )
    {
        stackRef.push( i );
        cout << stackRef.top() << " ";
    }
}

template <typename T> void popElements( T &stackRef )
{
    while ( !stackRef.empty() )
    {
        cout << stackRef.top()  << " ";
        stackRef.pop();
    }
}

