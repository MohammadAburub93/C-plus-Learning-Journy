#include <iostream>
#include <cmath>

using namespace std;


float read_circle_diameter()
{
	float d;

	cout << "Please enter the diameter value?" << endl;
	cin >> d;

	return d;
}

float area_calc(float d)
{
	float area;

	const float PI = 3.14;

	area = PI * pow(d, 2) / 4;

	return area;
}

void print_circle_area(float area)
{
	cout << "The area of the selected circle is: " << area << endl;
}

int main()
{
	print_circle_area(area_calc(read_circle_diameter()));

	return 0;
}