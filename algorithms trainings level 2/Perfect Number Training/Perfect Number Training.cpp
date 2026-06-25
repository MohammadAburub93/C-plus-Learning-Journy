#include <iostream>
using namespace std;


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

bool isPerfectNumber(int number)
{
	int DivSum = 0;

	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			DivSum += i;
		}
	}

	return number == DivSum;
}

void PrintPerfectNumberStatus(int number)
{
	if (isPerfectNumber(number))
		cout << number << " is perfect number";
	else
		cout << number << " is not perfect number";
}

int main()
{

	PrintPerfectNumberStatus(ReadPositiveNumber("Please enter a positive number to check"));

	return 0;
}
