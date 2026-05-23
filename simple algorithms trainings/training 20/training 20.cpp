#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14;

float area_calc(float a)
{
	return ((PI * pow(a, 2)) / 4);
}

int main()
{
	float a, area;
	
	cout << "Please enter the square side length." << endl;
	cin >> a;

	area = area_calc(a);

	cout << "The area of the circle is: " << ceil(area) << endl;

	return 0;

}