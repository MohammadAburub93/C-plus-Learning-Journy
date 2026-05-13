#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a,b, area;
	const float PI = 3.14;

	cout << "Please enter the triangle side length." << endl;
	cin >> a;

	cout << "Please enter the triangle base length." << endl;
	cin >> b;

	area = PI * (pow(b, 2) /4) * ((2 * a - b) / (2 * a + b));

	cout << "The area of the circle is: " << ceil(area) << endl;

	return 0;

}