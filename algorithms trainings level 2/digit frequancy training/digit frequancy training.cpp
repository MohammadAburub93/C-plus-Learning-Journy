// digit frequancy training.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

short ReadDigit(string message)
{
	int Digit;

	do
	{
		cout << message << endl;
		cin >> Digit;
	} while (Digit <= 0 && Digit > 10);

	return Digit;
}

int DigitFrequency(int Number, short Digit)
{
	int Remainder = 0, DigitCount = 0;
	
	do
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (Remainder == Digit)
			DigitCount++;

	} while (Number > 0);

	return DigitCount;
}
int main()
{
	int Number = 0;
	short Digit = 0;

	Number = ReadPositiveNumber("Please enter a positive number.");
	Digit = ReadDigit("Please enter the digit value from 0 to 9");

	cout << "The frequency of the " << Digit << " digit is: " << DigitFrequency(Number, Digit) << " times." << endl;
	return 0;
}
