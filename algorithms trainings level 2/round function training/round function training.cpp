#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
	float Number;

	cout << "Please enter a float number" << endl;
	cin >> Number;

	return Number;
}

float GenerateFractionPart(float Number)
{
	return Number - (int)Number;
}

float RoundNumber(float Number)
{
	int IntPart = (int)Number;
	float Fraction = GenerateFractionPart(Number);

	if (abs(Fraction) >= 0.5)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}
	else
		return IntPart;
}

int main()
{
	float Number = ReadNumber();

	cout << "My round result : " << RoundNumber(Number) << endl;

	cout << "C++ round result : " << round(Number) << endl;


	return 0;
}