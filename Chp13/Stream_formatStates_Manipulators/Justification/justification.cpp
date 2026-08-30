#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int x = 12345;

  cout << "Default is right justified: " << endl << setw(10) << x;

  cout << "\n\nUse std::left to left justify x:\n" << left << setw(10) << x;

  cout << "\n\nUse std::right to right justify x:\n"
       << right << setw(10) << x << endl;
}
