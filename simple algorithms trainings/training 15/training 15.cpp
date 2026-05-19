#include <iostream>
using namespace std;


float rec_area(float a, float b)
{
	return a * b;
}

int main()
{
	float a, b;

	cout << "Please enter the rectangle longest side length." << endl;
	cin >> a;

	cout << "Please enter the rectangle shortest side length." << endl;
	cin >> b;


	cout << "The area of the rectangle is: " << rec_area(a, b) << endl;

	return 0;
}