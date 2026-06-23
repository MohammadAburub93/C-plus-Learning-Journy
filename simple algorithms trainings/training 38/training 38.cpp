#include <iostream>

using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

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

void PrintNumberType(int number)
{
	if (CheckPrimeNumber(number) == enPrimeNotPrime::Prime)
		cout << "\nYour number is a Prime number!" << endl;
	else
		cout << "\nYour number is not a Prime number!" << endl;  
}

int main()
{

	PrintNumberType(ReadPositiveIntegerNumber("Please enter a positive integer number?"));
	return 0;
}