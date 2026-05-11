#include <iostream>
using namespace std;

int main()
{
	float base, hight, area;

	cout << "Please enter the triangle base length." << endl;
	cin >> base;

	cout << "Please enter the triangle hight." << endl;
	cin >> hight;

	area = 0.5 * base * hight;

	cout << "The area of the triangle is: " << area << endl;

	return 0;
}