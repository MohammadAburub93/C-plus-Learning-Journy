#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
	float number;

	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

float CalculateBillAfterTaxes(float Bill)
{
	return Bill + (Bill * 0.1) + (Bill * 0.16);
}

int main()
{
	float Bill = ReadPositiveNumber("Please enter a positve value of the bill.");

	cout << "The bill value before taxes is: " << Bill << endl;

	cout << "\n***************************\n";
	cout << "The bill value after taxes is: " << CalculateBillAfterTaxes(Bill) << endl;


	return 0;
}