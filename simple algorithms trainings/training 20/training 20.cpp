#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, area;
	const float PI = 3.14;

	cout << "Please enter the square side length." << endl;
	cin >> a;

	area = (PI * pow(a, 2)) / 4;

	cout << "The area of the circle is: " << ceil(area) << endl;

	return 0;

}