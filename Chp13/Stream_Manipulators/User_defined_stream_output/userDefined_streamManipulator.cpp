#include <iostream>
using namespace std;

ostream &bell(ostream &output) { return output << '\a'; }

ostream &carriageReturn(ostream &output) { return output << '\r'; }

ostream &tab(ostream &output) { return output << '\t'; }

ostream &endline(ostream &output) { return output << '\n' << flush; }

int main() {
  cout << "Testing the tab manipulator: " << endline << 'a' << tab << 'b' << tab
       << 'c' << endline;

  cout << "Testing the carriageReturn and bell manipulator: " << endline
       << "..........." << endline;

  cout << bell;

  cout << carriageReturn << "-----" << endline;
}
