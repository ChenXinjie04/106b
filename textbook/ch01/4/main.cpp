#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "This program will display the sum of first N odd number." << endl;
	cout << "Enter a number: ";
	cin >> N;
	int number = 1;
	int sum = 0;
	for (int i = 0; i < N; ++i) {
		sum += number;
		number += 2;
	}
	cout << "The sum of first " << N << " number is " << sum << endl;
	return 0;
}
