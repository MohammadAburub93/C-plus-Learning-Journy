#include <iostream>
using namespace std;

int main()
{
	float a,b, area;
	const float PI = 3.14;

	cout << "Please enter the triangle side length." << endl;
	cin >> a;

	cout << "Please enter the triangle base length." << endl;
	cin >> b;

	area = PI * ((b*b) /4) * ((2 * a - b) / (2 * a + b));

	cout << "The area of the circle is: " << area << endl;

	return 0;

}