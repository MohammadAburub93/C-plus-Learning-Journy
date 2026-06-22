#include <iostream>
#include <cmath>

using namespace std;


float read_square_side_length()
{
	float a;

	cout << "Please enter the square side length." << endl;
	cin >> a;

	return a;
}

float circle_area_calc(float a)
{
	float area;

	const float PI = 3.14;

	area = PI * pow(a, 2) / 4;

	return area;
}

void print_circle_area(float area)
{
	cout << "The area of the selected circle is: " << area << endl;
}

int main()
{
	print_circle_area(circle_area_calc(read_square_side_length()));

	return 0;
}