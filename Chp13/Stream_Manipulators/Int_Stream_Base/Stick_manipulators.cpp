#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter a number: " << endl;
  cin >> number;

  cout << number << " in hexadecimal is: " << hex << number << endl;

  cout << dec << number << " in octal is: " << oct << number << endl;

  cout << setbase(10) << number << " in decimal is: " << number << endl;
}
