#include <iostream>
using namespace std;

const int SENTINEL = -1;

int main() {
	cout << "This program gives the average of a list of numbers." << endl;
	cout << "Use " << SENTINEL << " to signal the end." << endl;
	int total = 0;
	int cnt = 0;
	while (true) {
		int value;
		cout << " ? ";
		cin >> value;
		if (value == SENTINEL) break;
		total += value;
		cnt += 1;
	}
	double average = double(total) / cnt;
	cout << "The average is " << average << "." << endl;
	return 0;
}