#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14;

float area_calc(float a, float b)
{
	return (PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b)));
}

int main()
{
	float a,b, area;
	
	cout << "Please enter the triangle side length." << endl;
	cin >> a;

	cout << "Please enter the triangle base length." << endl;
	cin >> b;

	area = area_calc(a, b);

	cout << "The area of the circle is: " << ceil(area) << endl;

	return 0;

}