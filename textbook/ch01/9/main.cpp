#include <iostream>
using namespace std;

bool isPrime(int);

int main() {
	int n;
	cout << "This program factors a number." << endl;
	cout << "Enter number to be factored: ";
	cin >> n;
	bool flag = false;
	int prime = 1;
	while (n != 1) {
		prime += 1;
		while (!isPrime(prime)) prime += 1;
		while (n % prime == 0) {
			n /= prime;
			if (flag) {
				cout << " X ";
			} else {
				flag = true;
			}
			cout << prime;
		}
	}
	cout << endl;

	return 0;
}

bool isPrime(int prime) {
	if (prime <= 1) return false;
	for (int x = 2; x * x <= prime; ++x) {
		if (prime % x == 0) return false;
	}
	return true;
}
