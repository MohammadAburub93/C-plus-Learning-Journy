#include <iostream>
using namespace std;

void read_triangle_sides(float &base, float &hight)
{
	cout << "Please enter the triangle base length." << endl;
	cin >> base;

	cout << "Please enter the triangle hight." << endl;
	cin >> hight;
}

float calc_trianglr_area(float base, float hight)
{
	return (0.5 * base * hight);
}

void print_tri_area(float area)
{
	cout << "The area of the triangle is: " << area << endl;
}

int main()
{
	float base, hight;

	read_triangle_sides(base, hight);
	print_tri_area(calc_trianglr_area(base, hight));

	return 0;
}