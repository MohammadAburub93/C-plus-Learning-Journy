#include <iostream>
using namespace std;

int main()
{
	float a, area;
	const float PI = 3.14;

	cout << "Please enter the square side length." << endl;
	cin >> a;

	area = (PI * a * a) / 4;

	cout << "The area of the circle is: " << area << endl;

	return 0;

}