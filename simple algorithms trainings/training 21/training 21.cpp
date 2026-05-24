#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14;

float area_calc(float l)
{
	return (pow(l, 2) / (4 * PI));
}

int main()
{
	float l, area;
	
	cout << "Please enter the circumference value." << endl;
	cin >> l;

	area = area_calc(l);

	cout << "The area of the circle is: " << ceil(area) << endl;

	return 0;

}