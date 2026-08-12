#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned int rollDice() ;

int main() {
	// same as python, continue = 0 , won = 1, lost = 2
	enum Status {CONTINUE, WON , LOST};

	srand( static_cast <unsigned int> ( time(0)));

	unsigned int myPoint = 0;
	Status gameStatus = CONTINUE;
	unsigned int sumDice = rollDice();

	switch (sumDice) {
		case 7:
		case 11:
			gameStatus = WON;
			break;

		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

		default:
			gameStatus = CONTINUE;
			myPoint = sumDice;
			cout << "Point is " << myPoint << endl;
	}

	
	while (CONTINUE == gameStatus) {
		sumDice = rollDice();

		if (sumDice == myPoint) {
			gameStatus =WON;
		}
		else if (sumDice == 7) {
			gameStatus = LOST;
		}
	}	

	if (gameStatus == WON) {
		cout << "Player wins" << endl;
	}
	else {
		cout << "Player loses" << endl;
	}	

}

unsigned int rollDice() {
	unsigned int die1 = 1 + rand() % 6;
	unsigned int die2 = 1 + rand() % 6;

	unsigned int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;

	return sum;
}
		
