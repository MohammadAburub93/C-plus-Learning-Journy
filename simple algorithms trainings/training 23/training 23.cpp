#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	float a, b, c, p, area;
	const float PI = 3.14;

	cout << "Please enter the first triangle side length?" << endl;
	cin >> a;

	cout << "Please enter the second triangle side length?" << endl;
	cin >> b;

	cout << "Please enter the third triangle side length?" << endl;
	cin >> c;

	p = (a + b + c) / 2;

	area = PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);

	cout << "The area of the circle is: " << ceil(area) << endl;


	return 0;
}