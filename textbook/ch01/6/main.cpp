#include <iostream>
#include <climits>
using namespace std;

const int SENTINEL = 0;

int main() {
	cout << "This program finds the largest integer in a list." << endl;
	cout << "Enter 0 to signal the end of the list." << endl;
	int largest = INT_MIN;
	int secondLargest = INT_MIN;
	int input;
	while (true) {
		cout << "? ";
		cin >> input;
		if (input == SENTINEL) break;
		if (input > largest) {
			secondLargest = largest;
			largest = input;
		} else if (input > secondLargest) {
			secondLargest = input;
		}
	}
	cout << "The largest value is " << largest << " ." << endl;
	cout << "The second largest value is " << secondLargest << " ." << endl;

	return 0;
}
