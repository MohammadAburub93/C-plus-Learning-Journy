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

void PrintPerfectNumberFrom1ToN(int number)
{
	cout << "The perfect numbers from 1 to " << number;
	cout << " are:" << endl;
	cout << "\n***********************************\n";

	for (int i = 1; i <= number; i++)
	{
		if (isPerfectNumber(i))
			cout << i << "\n";
	}
	
}

int main()
{

	PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please enter a positive number to check until it"));

	return 0;
}
