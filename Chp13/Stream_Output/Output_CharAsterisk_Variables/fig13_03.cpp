#include <iostream>
using namespace std;

int main() {
  const char *const word = "again";

  cout << "Value of word is: " << word << endl
       << "Value of static_cast<const void *>(word) is :"
       << static_cast<const void *>(word) << endl;
}
