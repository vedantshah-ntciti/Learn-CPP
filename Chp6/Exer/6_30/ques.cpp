#include <iostream>
#include <cmath>
using namespace std;

int reverse(int num) {
	int rev_num= 0, neg;
	neg = (num > 0) ? 0 : 1;
	num = abs(num);
	while (num) {
		rev_num = rev_num*10 + num%10;
		num = num/10;
	}
	return ((neg==1) ? -rev_num : rev_num);
}	

int main() {
	int num; 
	cin >> num;
	cout << reverse(num) << endl;
}
