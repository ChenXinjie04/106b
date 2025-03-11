#include <iostream>
#include <climits>
using namespace std;

const int SENTINEL = 0;

int main() {
	cout << "This program finds the largest integer in a list." << endl;
	cout << "Enter 0 to signal the end of the list." << endl;
	int input;
	int largest = INT_MIN;
	while (true) {
		cout << "? ";
		cin >> input;
		if (input == SENTINEL) {
			break;
		}
		if (input > largest) largest = input;
	}
	cout << "The largest value was " << largest << " ." << endl;
	return 0;
}