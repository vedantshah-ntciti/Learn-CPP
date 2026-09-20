#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
using namespace std;

char nextLetter();

int main()
{
    array < char , 10 > chars;
    ostream_iterator <char > output(cout , " " );
    fill(chars.begin() , chars.end()  , '5');

    cout << "chars after filling with 5s:\n";
    copy( chars.begin() , chars.end() , output);

    fill_n(chars.begin() , 5 , 'A');

    cout << "\n\nchars after filling five elements with As:\n";
    copy( chars.begin() , chars.end() , output);

    generate(  chars.begin() , chars.end() , nextLetter);

    cout << "\n\nchars after generating letters A-J:\n";
    copy( chars.begin() , chars.end() , output);

    generate_n(chars.begin() , 5 , nextLetter);

    cout << "\n\nchars after generating K-O for the first" << " first five elements:\n";
    copy( chars.begin() , chars.end() , output);
    cout << endl;
}

char nextLetter()
{
    static char letter = 'A';
    return letter++;
}
