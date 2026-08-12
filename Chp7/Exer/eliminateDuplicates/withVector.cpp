#include <iostream>
#include <vector>
using namespace std;

bool inArr(const vector<int> & arr, int num)
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
    vector <int> arr;
    for (int i = 0; i< 20; i++)
    {
        cin >> num;
        if (inArr(arr, num))
        {
            continue;
        }
        
        arr.push_back(num);
    }

    for (int item : arr) 
    {
        cout << item << " " ;
    }
    cout <<  endl;
}