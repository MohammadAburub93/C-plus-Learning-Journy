#include <iostream>
using namespace std;

enum enPerfectNotPerfect {Perfect = 1, NotPerfect = 2};

int ReadPositiveNumber(string message)
{
	int number = 0;

	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

enPerfectNotPerfect isPerfectNumber(int number)
{
	int DivSum = 0;

	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			DivSum += i;
		}
	}

	{
		if (number == DivSum)
			return enPerfectNotPerfect::Perfect;
		else
			return enPerfectNotPerfect::NotPerfect;
	}
}

void PrintPerfectNumberStatus(int number)
{
	
	switch (isPerfectNumber(number))
	{
	case enPerfectNotPerfect::Perfect:
		cout << number << " is perfect number";
		break;
	case enPerfectNotPerfect::NotPerfect:
		cout << number << " is not perfect number";
		break;
	}
}

int main()
{

	PrintPerfectNumberStatus(ReadPositiveNumber("Please enter a positive number to check"));

	return 0;
}
