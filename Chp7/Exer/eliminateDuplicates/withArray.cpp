#include <iostream>
#include <array>
using namespace std;

bool inArr(const array<int, 20> & arr, int num)
{
    for (int item : arr) 
    {
        if (item == num) 
        {
            return true;
        }
    }
    return false;
} 

int main() 
{
    int num;
    array <int, 20> arr;
    int curr = 0;
    for (int i = 0; i< 20; i++)
    {
        cin >> num;
        if (inArr(arr, num))
        {
            continue;
        }
        
        arr[curr++] = num;
    }

    for (int i = 0 ; i< curr; i++) 
    {
        cout << arr[i] << " " ;
    }
    cout <<  endl;
}