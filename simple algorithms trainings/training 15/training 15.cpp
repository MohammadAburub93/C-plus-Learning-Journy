#include <iostream>
using namespace std;

int main()
{
	float a, b, area;

	cout << "Please enter the rectangle longest side length." << endl;
	cin >> a;

	cout << "Please enter the rectangle shortest side length." << endl;
	cin >> b;

	area = a * b;

	cout << "The area of the rectangle is: " << area << endl;

	return 0;
}