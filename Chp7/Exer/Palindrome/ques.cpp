#include <iostream>
#include <string>
using namespace std;

class Solution
{
    public :
        bool isPalindrome(string s)
        {
            if (s == "")
            {
                return true;
            }
            size_t L = 0 , R;
            R = s.size()-1;

            while (L < R)
            {
                if (s[L++] !=s[R--])
                {
                    return false;
                }

            }
            return true;
        }
};

int main()
{
    Solution mySol;
    cout << mySol.isPalindrome("abcbdbdbs") << endl;
    cout << mySol.isPalindrome("a") << endl;
    cout << mySol.isPalindrome("wassaw") << endl;
    cout << mySol.isPalindrome("") << endl;
}