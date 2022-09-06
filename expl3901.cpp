#include <iostream>

typedef int height;
typedef int weight;
typedef int bmi;

bmi computed_bmi(height h, weight w)	// deliberately wrong
{
	return w * 10000 / (h*h);
}

int main()
{
	using namespace std;

	cout << "Height in centimeters: ";
	height h{};
	cin >> h;

	cout << "Weight in kilograms: ";
	weight w{};
	cin >> w;

	cout << "Body-mass index = " << computed_bmi(w, h) << endl;
}
