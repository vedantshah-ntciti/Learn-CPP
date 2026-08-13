#include <iostream>
using namespace std;

int main()
{
    int b[] = {10, 20 ,30 ,40};
    int *bPtr = b;

    cout << "Array b is displayed with: \n\nArray subscript notation\n";

    for (size_t i = 0; i<4; i ++)
    {
        cout << "b[" << i << "] = " << b[i] << endl;
    }

    cout << "\nPointer/offset notation where " << "the pointer is the array name\n";

    for (size_t i = 0; i<4; i ++)
    {
        cout << "*(b + " << i << ") = " << *(b+i) << endl;
    }

    cout << "\nPointer subscriot notation\n";

    for (size_t i = 0; i<4; i ++)
    {
        cout << "bPtr[" << i << "] = " << bPtr[i] << endl;
    }

    cout << "\nPointer/offset notation\n";

    for (size_t i = 0; i<4; i ++)
    {
        cout << "*(bPtr + " << i << ") = " << *(bPtr+i) << endl;
    }

}