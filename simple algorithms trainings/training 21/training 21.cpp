#include <iostream>
using namespace std;

int main()
{
	float l, area;
	const float PI = 3.14;

	cout << "Please enter the circumference value." << endl;
	cin >> l;

	area = (l * l) / (4 * PI);

	cout << "The area of the circle is: " << area << endl;

	return 0;

}