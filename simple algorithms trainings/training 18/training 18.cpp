#include <iostream>
#include <cmath>

using namespace std;


float read_circle_radius()
{
	float r;

	cout << "Please enter the radius value?" << endl;
	cin >> r;

	return r;
}

float area_calc(float r)
{
	const float PI = 3.14;

	return PI * pow(r, 2);
}

void print_circle_area(float area)
{
	cout << "The area of the selected circle rounded up is: " << area << endl;
}

int main()
{
	print_circle_area(area_calc(read_circle_radius()));

	return 0;
}