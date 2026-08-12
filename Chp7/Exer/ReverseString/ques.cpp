#include <iostream>
#include <string>
using namespace std;

void reverseString(string s)
{
    if (s == "" || s.size() == 1)
    {
        cout << s << endl;
        return;
    }

    for (int i = s.size() -1; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << endl;
}

int main()
{
    reverseString("");
    reverseString("abcdefghiijklmnopqrstuvwxyz");
    reverseString("aslfjgn");
    reverseString("wassawwassaw");
    reverseString("a");
}