#include <iostream>
#include <cmath>

using namespace std;


float read_circle_cercumfrence()
{
	float l;

	cout << "Please enter the circumference value." << endl;
	cin >> l;

	return l;
}

float circle_area_calc(float l)
{
	float area;

	const float PI = 3.14;

	area = (pow(l, 2) / (4 * PI));

	return area;
}

void print_circle_area(float area)
{
	cout << "The area of the selected circle is: " << area << endl;
}

int main()
{
	print_circle_area(circle_area_calc(read_circle_cercumfrence()));

	return 0;
}