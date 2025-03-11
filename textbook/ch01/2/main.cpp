#include <iostream>
using namespace std;

const double INCH = 0.0254;
const double FOOT = 12 * INCH;

int main() {
	double meter;
	cout << "This program converts meter to feet and inch." << endl;
	cout << "Enter a meter: ";
	cin >> meter;
	int feet = meter / FOOT;
	double inch = (meter - feet * FOOT) / INCH;
	cout << meter << " meters is " << feet << " feet and " << inch
			<< " inches." << endl;

	return 0;
}
