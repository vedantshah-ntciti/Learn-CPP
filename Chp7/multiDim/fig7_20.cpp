#include <iostream> 
#include <array>
using namespace std;

const size_t rows = 2;
const size_t colums = 3;
void printArr(const array<array <int , colums> , rows> &a);

int main()
{
    array< array <int, colums> , rows> arr1 = {1,2,3,4,5,6};
    array< array <int, colums> , rows> arr2 = {1,2,3,4,5};
    
    cout << "Values in arr1 are:\n";
    printArr(arr1);

    cout << "Values in arr2 are:\n";
    printArr(arr2);
}

void printArr(const array<array <int , colums> , rows> &a)
{
    for (auto const &row : a)
    {
        for (auto const &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    cout << endl;
}
    
