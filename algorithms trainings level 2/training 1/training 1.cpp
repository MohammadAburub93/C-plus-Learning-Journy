#include <iostream>
using namespace std;

void HeaderPrint()
{
	cout << "\n\t\t\tMultiplication Table From 1 to 10\t\t\n\n";

	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}

	cout << "\n----------------------------------------------------------------------------------------\n";
}

string PrintColumnSeperator(int i)
{
	if (i != 10)
		return "  |";
	else
		return " |";
}

void PrintingMultiplicationTable()
{
	HeaderPrint();
	for (int i = 1; i <= 10; i++)
	{
		cout << i << PrintColumnSeperator(i);
		
		for (int m = 1; m <= 10; m++)
		{
			cout << "\t" << i * m;
		}
		cout << "\n";
	}
}
int main()
{
	PrintingMultiplicationTable();
	return 0;
}
