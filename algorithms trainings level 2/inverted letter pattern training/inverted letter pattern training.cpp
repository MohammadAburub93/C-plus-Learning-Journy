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

void PrintInvertedLetterPattern(int Number)
{
	for (int i = Number + 64; i >= 65; i--)
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

	PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positve number."));
	return 0;
}
