#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string message)
{
	int Number;

	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int CalculateDigitsSUM(int Number)
{
	int Remainder = 0, Sum = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum += Remainder;
	}

	return Sum;
}

int main()
{
	int DigitsSum = 0;
	
	DigitsSum = CalculateDigitsSUM(ReadPositiveNumber("Please enter a positive number"));
	cout << "\n\nThe sum of the digits is: " << DigitsSum << endl;

	return 0;
}
