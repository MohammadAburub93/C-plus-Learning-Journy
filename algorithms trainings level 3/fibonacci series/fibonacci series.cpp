#include <iostream>
using namespace std;

short GetFibonacciSeriesValue()
{
	static short PrevVal1 = 1, PrevVal2 = 0;
	short currentVal = PrevVal1 + PrevVal2;
	PrevVal2 = PrevVal1;
	PrevVal1 = currentVal;

	return currentVal;
}

void PrintFibonacciSeries(short Number)
{
	cout << "1  ";

	for (short i = 2; i <= Number; i++)
	{
		cout << GetFibonacciSeriesValue() << "  ";
	}

	cout << endl;
}

int main()
{
	PrintFibonacciSeries(15);

	system("pause>0");

	return 0;
}