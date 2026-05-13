#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float l, area;
	const float PI = 3.14;

	cout << "Please enter the circumference value." << endl;
	cin >> l;

	area = (pow(l, 2) / (4 * PI));

	cout << "The area of the circle is: " << ceil(area) << endl;

	return 0;

}