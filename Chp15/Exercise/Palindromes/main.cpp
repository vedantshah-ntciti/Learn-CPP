#include <iostream>
#include <vector>
//#include <iomanip>
using namespace std;

bool isPalindrome(vector<int> &);
void printVector(vector<int> &);

int main()
{
    vector <int> vector1 = { 1,2,3,2,1 };
    vector <int> vector2 = { 1,2,3,4 };
    vector <int> vector3 = {};

    printVector(vector1);
    cout << boolalpha;
    cout << " isPalindrome? " << isPalindrome(vector1) << endl;
    printVector(vector2);
    cout << " isPalindrome? " << isPalindrome(vector2) << endl;
    printVector(vector3);
    cout << " isPalindrome? " << isPalindrome(vector3) << endl;
}

bool isPalindrome(vector <int> &vectorRef)
{
    int L = 0 , R = vectorRef.size() - 1;
    if (R <= 1)
    {
        return true;
    }

    while (L < R)
    {
        if (vectorRef[L++] != vectorRef[R--] )
        {
            return false;
        }
    }
    return true;
}

void printVector(vector <int> &vectorRef)
{
    for (int items : vectorRef)
    {
        cout << items << " ";
    }
}
