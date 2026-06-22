#include <iostream>
using namespace std;

void read_rectangle_values(float &a, float &b)
{
	cout << "Please enter the rectangle longest side length." << endl;
	cin >> a;

	cout << "Please enter the rectangle shortest side length." << endl;
	cin >> b;

}

float rec_area(float a, float b)
{
	return a * b;
}

void print_area_value(float area)
{
	cout << "The area of the rectangle is: " << area << endl;
}

int main()
{
	float a, b;

	read_rectangle_values(a, b);
	print_area_value(rec_area(a, b));

	return 0;
}