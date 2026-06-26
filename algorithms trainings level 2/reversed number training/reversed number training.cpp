#include <iostream>

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

int ReversedNumber(int Number)
{
	int Remainder = 0;
	int Number2 = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}

int main()
{
	int ReversedNum = 0;

	ReversedNum = ReversedNumber(ReadPositiveNumber("Please enter a positive number"));
	cout << "\n\nThe reversed number is: " << ReversedNum << endl;

	return 0;
}