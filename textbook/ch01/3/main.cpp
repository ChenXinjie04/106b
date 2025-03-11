#include <iostream>
using namespace std;

int main() {
	cout << "This program compute the sum between 1 and 100." << endl;
	int sum = 0;
	for (int i = 1; i <= 100; ++i) {
		sum += i;
	}
	cout << "The sum is " << sum << "." << endl;

	return 0;
}
