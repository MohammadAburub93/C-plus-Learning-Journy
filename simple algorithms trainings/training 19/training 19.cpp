#include <iostream>
using namespace std;

int main()
{
	float d, area;
	const float PI = 3.14;

	cout << "Please enter the circle diameter." << endl;
	cin >> d;

	area = (PI * d * d) / 4;

	cout << "The area of the circle is: " << area << endl;

	return 0;
	
}