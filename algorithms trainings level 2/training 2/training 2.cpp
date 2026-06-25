#include <iostream>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveIntegerNumber(string message)
{
	int number = 0;

	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0 || typeid(number) == typeid(float));

	return number;
}

enPrimeNotPrime CheckPrimeNumber(int number)
{
	int M = round(number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (number % counter == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int number)
{
	cout << "\n";
	cout << "Prime numbers from 1 to " << number;
	cout << " are: " << endl;
	for (int i = 1; i <= number; i++)
	{
		switch (CheckPrimeNumber(i))
		{
		case enPrimeNotPrime::Prime:
			cout << i << endl;
			break;
		}
	
	}
}

int main()
{

	PrintPrimeNumbersFrom1ToN(ReadPositiveIntegerNumber("Please enter a positive integer number?"));
	return 0;
}
