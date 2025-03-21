/*
* File: Craps.cpp
* ---------------
* This program plays the casino game called craps, which is
* played using a pair of dice.
*/
#include <iostream>
#include "random.h"
using namespace std;

/* Function Prototypes */
bool tryToMakePoint(int point);
int rollTwoDice();
/* Main program */
int main() {
	cout << "This program plays a game of craps." << endl;
	int point = rollTwoDice();
	switch (point) {
		case 7: case 11:
			cout << "That's a natural. You win." << endl;
			break;
		case 2: case 3: case 12:
			cout << "That's craps. You lose." << endl;
			break;
		default:
			cout << "Your point is " << point << "." << endl;
			if (tryToMakePoint(point)) {
				cout << "You made your point. You win." << endl;
			} else {
				cout << "You rolled a seven. You lose." << endl;
			}
	}
	return 0;
}

/*
* Function: tryToMakePoint
* Usage: flag = tryToMakePoint(point);
* ------------------------------------
* Rolls the dice twice repeatedly until you either make your point or roll a 7.
* The function returns true if you make your point and false if a 7 comes
* up first.
*/
bool tryToMakePoint(int point) {
	while(true) {
		int total = rollTwoDice();
		if (total == point) return true;
		if (total == 7) return false;
	}
}

/*
* Function: rollTwoDice
* Usage: total = rollTwoDice();
* -----------------------------
* Simulates the process of rolling two dice. The individual values of the
* dice are printed on cout with the sum, which is returned as the
* value of the function.
*/
int rollTwoDice() {
	cout << "Rolling the dice . . ." << endl;
	int d1 = randomInteger(1, 6);
	int d2 = randomInteger(1, 6);
	int total = d1 + d2;
	cout << "You rolled " << d1 << " and " << d2
			<< " - that's " << total << endl;
	
	return total;
}
