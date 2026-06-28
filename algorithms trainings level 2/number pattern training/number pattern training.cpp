#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
	int Number = 0;

	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void PrintInvertedNumberPattern(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		cout << "\n";
		for (int m = 1; m <= i; m++)
		{
			cout << i;
		}

	}
	cout << "\n";
}

int main()
{

	PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positve number."));
	return 0;
}
