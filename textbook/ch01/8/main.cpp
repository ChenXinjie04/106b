#include <iostream>
using namespace std;

int main() {
	int input;
	cout << "This program reverses the digits in an integer." << endl;
	cout << "Enter a positive integer: ";
	cin >> input;
	int result = 0;
	while (input > 0) {
		result = result * 10 + input % 10;
		input /= 10;
	}
	cout << "The reversed integer is " << result << "." << endl;

	return 0;
}
