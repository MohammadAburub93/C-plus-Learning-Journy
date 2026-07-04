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

float ABSvalue(float Number)
{
	if (Number < 0)
		return Number * -1;
	else
		return Number;
}

int main()
{
	float Number = ReadNumber();

	cout << "My ABS result : " << ABSvalue(Number) << endl;
	
	cout << "C++ ABS result : " << abs(Number) << endl;

	return 0;
}