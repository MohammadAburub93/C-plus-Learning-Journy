#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14;

float area_calc(float a, float b, float c)
{
	float p;
	p = (a + b + c) / 2;

	return (PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2));


}

int main()
{

	float a, b, c, area;
	

	cout << "Please enter the first triangle side length?" << endl;
	cin >> a;

	cout << "Please enter the second triangle side length?" << endl;
	cin >> b;

	cout << "Please enter the third triangle side length?" << endl;
	cin >> c;

	

	area = area_calc(a, b, c);

	cout << "The area of the circle is: " << ceil(area) << endl;


	return 0;
}