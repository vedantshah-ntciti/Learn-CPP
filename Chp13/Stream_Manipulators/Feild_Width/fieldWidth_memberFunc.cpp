#include <iostream>
using namespace std;

int main() {
  int widthValue = 4;
  char sentence[10];

  cout << "Enter a sentence: " << endl;

  while (cin >> sentence) {
    cout.width(widthValue++);
    cout << sentence << endl;
    cin.width(5);
  }
}
