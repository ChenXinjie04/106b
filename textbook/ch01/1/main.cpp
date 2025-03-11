#include <iostream>
using namespace std;

int main() {
	int celsius;
	double fahrenheit;
	cout << "This program converts Celsius to Fahrenheit." << endl;
	cout << "Enter a Celsius temperature: ";
	cin >> celsius;
	fahrenheit = celsius * 9.0 / 5.0 + 32;
	cout << celsius << " degrees Celsius is " 
			<< fahrenheit << " degrees Fahrenheit." << endl;

	return 0;
}
