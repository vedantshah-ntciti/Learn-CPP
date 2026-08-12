#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
	int num;
	srand(static_cast <unsigned int> (time(0)));
	
	num = 1 + rand() %1000;
	cout << "Generated number: " << num << endl;
	cout << "I have a number between 1 and 100\n" << "Can you guess it?\n" << "Please type your first guess." << endl;
	
	int guess;
	while (cin >> guess) {
		if (guess == num) {
			cout << "You guessed it" << endl;
			break;
		}
		cout << "Too bad. Please guess again." << endl;
	}
}
