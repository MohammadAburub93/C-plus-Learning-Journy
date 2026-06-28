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

bool isPalindromeNumber(int Number)
{
	return (Number == ReversedNumber(Number));
}

int main()
{
	if (isPalindromeNumber(ReadPositiveNumber("Please enter a positive number.")))
		cout << "\nYes, it's a palindrome number.\n";
	else
		cout << "\nNo, it's not  a palindrome number.\n";

	return 0;
}
