#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float r, area;
	const float PI = 3.14;

	cout << "Please enter the radius value?" << endl;
	cin >> r;

	area = PI * pow(r, 2);

	cout << "The area of the selected circle rounded up is: " << ceil(area) << endl;


	return 0;
}