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

float GenerateFractionPart(float Number)
{
	return Number - (int)Number;
}

float MyCeil(float Number)
{
	float Fraction = GenerateFractionPart(Number);

	if (abs(Fraction) > 0)
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	else
		return Number;
	
}


int main()
{
	float Number = ReadNumber();

	cout << "My ceil result : " << MyCeil(Number) << endl;

	cout << "C++ ceil result : " << ceil(Number) << endl;

	return 0;
}