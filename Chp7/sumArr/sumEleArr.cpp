#include <iostream>
#include <array>
using namespace std;

int main() 
{
	const size_t arrSize = 4;
	array <int , arrSize> a = {10, 20 ,30 ,40} ;
	
	int total = 0;

	for (size_t i = 0; i<arrSize; i++)
	{ 
		total += a[i];
	}

	cout << total << endl;
}
