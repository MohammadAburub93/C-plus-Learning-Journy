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

void PrintDigitFrequency(int Number)
{
	for (int digit = 1; digit <= 9; digit++)
	{
		short count = DigitFrequency(Number, digit);

		if (count != 0)
			cout << "Digit " << digit << " Frequency is " << count << " Times.\n";
		
	}
}

int main()
{
	PrintDigitFrequency(ReadPositiveNumber("Please enter a positive number."));

	return 0;
}