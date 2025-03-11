#include <iostream>
using namespace std;

int main() {
	double result = 0;
	int sign = 1, denominator = 1;
	for (int i = 0; i < 1000; ++i, sign *= -1, denominator += 2) {
		result += double(sign) / denominator;
	}
	cout << result;

	return 0;
}
