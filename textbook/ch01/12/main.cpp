#include <iostream>
#include <cmath>
using namespace std;

const double R = 2;
const int ITERATION = 10'000;
const double W = R / ITERATION;

int main() {
	double h, midPoint;
	double area = 0;
	int i;
	for (i = 0, midPoint = W * 0.5; i < ITERATION; ++i, midPoint += W) {
		h = sqrt(R * R - midPoint * midPoint);
		area += h * W;
	}
	cout << "The quarter circle has area: " << area << endl;

	return 0;
}
