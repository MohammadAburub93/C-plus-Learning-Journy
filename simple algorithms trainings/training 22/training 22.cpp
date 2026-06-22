#include <iostream>
#include <cmath>

using namespace std;


void read_triangel_sides_length(float &a, float &b)
{
	cout << "Please enter the triangle side length." << endl;
	cin >> a;

	cout << "Please enter the triangle base length." << endl;
	cin >> b;
}

double circle_area_calc(float a, float b)
{
	double area;

	const float PI = 3.14;

	area = (PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b)));

	return area;
}

void print_circle_area(float area)
{
	cout << "The area of the selected circle is: " << area << endl;
}

int main()
{
	float a, b;

	read_triangel_sides_length(a, b);
	print_circle_area(circle_area_calc(a, b));

	return 0;
}