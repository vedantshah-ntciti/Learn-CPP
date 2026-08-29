#include <iostream>
using namespace std;

int main() {
  const int SIZE = 80;
  char buffer1[SIZE];
  char buffer2[SIZE];

  cout << "Enter a sentence: " << endl;
  cin >> buffer1;

  cout << "\nThe string read with cin was: " << endl;
  cout << buffer1 << endl << endl;

  cin.get(buffer2, SIZE);

  cout << "The string read with cin.get was: " << endl << buffer2 << endl;
}
