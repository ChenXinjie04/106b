#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	while (n != 1) {
		if (n % 2) {
			cout << n << " is odd, so I multiply by 3 and add 1 to get ";
			n *= 3;
			n += 1;
			cout << n << endl;
		} else {
			cout << n << " is even, so I divide it by 2 to get ";
			n /= 2;
			cout << n << endl;
		}
	}

	return 0;
}
