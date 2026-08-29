#include <iostream>
using namespace std;

int main() {
  int character;

  cout << "Before input, cin.eof() is " << cin.eof() << endl;
  cout << "Enter a sentence followed by end-of-file:" << endl;

  while ((character = cin.get()) != EOF) {
    cout.put(character);
  }

  cout << "\nEOF in this system is: " << character << endl;

  cout << "After input of EOF, cin.eof() is: " << cin.eof() << endl;
}
