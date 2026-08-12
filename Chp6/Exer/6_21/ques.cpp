#include <iostream>
using namespace std;

bool isOdd(int n) {
	if (n%2!=0){
		return true;
	}
	else {

		return false;
	}
}

int main() {
	cout << "Press q to quit or input any int to continue" << endl;
	int num;
	while (cin >> num) {
		cout << num << " " << (isOdd(num)? "true" : "false")<< endl;
	}
	
	cout << "Program finished" << endl;
}
