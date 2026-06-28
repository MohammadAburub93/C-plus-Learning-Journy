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

void PrintLetterPattern(int Number)
{
	for (int i = 65; i <= Number + 64; i++)
	{
		cout << "\n";
		for (int m = 65; m <= i; m++)
		{
			cout << char(i);
		}

	}
	cout << "\n";
}

int main()
{

	PrintLetterPattern(ReadPositiveNumber("Please enter a positve number."));
	return 0;
}
