#include <iostream>
#include <cmath>

using namespace std;


void read_triangel_sides_length(float& a, float& b, float &c)
{
	cout << "Please enter the first triangle side length?" << endl;
	cin >> a;

	cout << "Please enter the second triangle side length?" << endl;
	cin >> b;

	cout << "Please enter the third triangle side length?" << endl;
	cin >> c;
}

float circle_inclused_in_triangle_area_calc(float a, float b, float c)
{
	float area, p;

	const float PI = 3.14;

	p = (a + b + c) / 2;

	area = (PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2));

	return area;
}

void print_circle_area(float area)
{
	cout << "The area of the selected circle is: " << area << endl;
}

int main()
{
	float a, b, c;

	read_triangel_sides_length(a, b, c);
	print_circle_area(circle_inclused_in_triangle_area_calc(a, b, c));

	return 0;
}