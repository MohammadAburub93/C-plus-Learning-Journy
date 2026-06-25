#include <iostream>
using namespace std;

void HeaderPrint()
{
	cout << "\n\t\t\tMultiplication Table From 1 to 10\t\t\n\n";
	cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n\n";
	cout << "----------------------------------------------------------------------------------------\n";
}

void PrintingMultiplicationTable()
{
	for (int i = 1; i <= 10; i++)
	{
		if (i != 10)
			cout << i << "  |";
		else
			cout << i << " |";
		
		for (int m = 1; m <= 10; m++)
		{
			cout << "\t" << i * m;
		}
		cout << "\n";
	}
}
int main()
{
	HeaderPrint();
	PrintingMultiplicationTable();
	return 0;
}
