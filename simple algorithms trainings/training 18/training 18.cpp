#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14;

float area_calc(float r)
{
	return PI * pow(r, 2);
}

int main()
{
	float r, area;
	
	cout << "Please enter the radius value?" << endl;
	cin >> r;


	cout << "The area of the selected circle rounded up is: " << ceil(area_calc(r)) << endl;


	return 0;
}