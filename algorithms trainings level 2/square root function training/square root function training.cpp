#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
	float Number;

	cout << "Please enter a number" << endl;
	cin >> Number;

	return Number;
}

float MySqrt(float Number)
{
	return pow(Number, 0.5);
}

int main()
{
	float Number = ReadNumber();

	cout << "My Sqrt result : " << MySqrt(Number) << endl;

	cout << "C++ Sqrt result : " << sqrt(Number) << endl;

	return 0;
}