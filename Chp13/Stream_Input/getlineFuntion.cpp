#include <iostream>
using namespace std;

int main() {
  const int SIZE = 80;
  char buffer[SIZE];

  cout << "Enter a sentence:" << endl;

  cin.getline(buffer, SIZE);

  cout << "\nThe sentence stored was " << endl << buffer << endl;
}
