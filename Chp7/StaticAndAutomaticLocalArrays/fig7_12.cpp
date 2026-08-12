#include <iostream>
#include <array>
using namespace std;

void staticArrayInit();
void automaticArrayInit();
const size_t arraySize = 3;

int main()
{
	cout << "First call to each function\n" << endl;
	staticArrayInit();
	automaticArrayInit();
	cout << endl;

	cout << "Second call to each function\n" << endl;
	staticArrayInit();
	automaticArrayInit();
	cout << endl;
	
}

void staticArrayInit(void)
{
	static array <int, arraySize> array1;

	cout << "\nValues on entering staticArrayInit:\n";

	for (size_t i = 0; i < array1.size(); i++)
	{
		cout << "array1[" << i << "] = " << (array1[i] ) << "  " ;
	}

	cout << "\nValues on exiting staticArrayInit:\n";

	for (size_t i = 0; i < array1.size(); i++)
	{
		cout << "array1[" << i << "] = " << (array1[i] += 5) << "  " ;
	}
}

void automaticArrayInit(void) 
{
	array< int, arraySize > array2 = {1,2,3};

	cout << "\nValues on entering automaticArrayInit:\n";

	for (size_t i = 0; i < array2.size(); i++)
	{
		cout << "array2[" << i << "] = " << (array2[i] ) << "  " ;
	}

	cout << "\nValues on exiting automaticArrayInit:\n";

	for (size_t i = 0; i < array2.size(); i++)
	{
		cout << "array2[" << i << "] = " << (array2[i] += 5) << "  " ;
	}
}
