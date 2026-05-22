#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14;

float area_calc(float d)
{
	return ((PI * pow(d, 2)) / 4);
}

int main()
{
	float d, area;
	
	cout << "Please enter the circle diameter." << endl;
	cin >> d;

	area = area_calc(d);

	cout << "The area of the circle is: " << ceil(area) << endl;

	return 0;
	
}