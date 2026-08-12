#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
	const size_t arrSize = 7;
	array<string, arrSize> colors = {"red", "orange" , "yellow", "green" , "blue" , "indigo", "violet"};

	cout << "Unsorted array:\n";
	for (string item : colors)
	{
		cout << item << " ";
	}
	cout << endl;
    
    sort(colors.begin() , colors.end());

    cout << "\nSorted Array\n";
    for (string items : colors)
    {
        cout << items << " ";
    }

    bool found = binary_search(colors.begin(), colors.end(), "indigo");
    cout << "\n\n\"indigo" << (found ? "was" : "was not") << " found in colors" << endl;

    found = binary_search(colors.begin(), colors.end(), "cyan");
    cout << "\n\n\"cyan" << (found ? "was" : "was not") << " found in colors" << endl;
}
