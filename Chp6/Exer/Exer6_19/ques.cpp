#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double a, double b) {
	if (a<0 || b<0){
		cerr << "Invalid Side lengths" << endl;
		return 0.0;
	}
	return sqrt(a*a + b*b);
}

int main() {
	double a,b;
	for (int i = 0; i< 3; i++) {
		cin >> a >> b;
		cout << hypotenuse(a,b) << endl;
	}
}
