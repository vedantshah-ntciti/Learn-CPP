#include <iostream>
using namespace std;

int main() {
  cout << "Before using showpoint" << endl
       << 9.9900 << endl
       << 9.9000 << endl
       << 9.0000 << endl;

  cout << "\nAfter using showpoint" << endl
       << showpoint << 9.9900 << endl
       << 9.9000 << endl
       << 9.0000 << endl;
}
