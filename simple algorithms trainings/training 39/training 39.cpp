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

float CalculateRemainder(float Bill, float Cash)
{
	return Cash - Bill;
}

int main()
{
	float Bill = ReadPositiveNumber("Please enter a positve value of the bill.");
	float Cash = ReadPositiveNumber("Please enter a positve value of cash.");

	cout << "The Total bill is: " << Bill << endl;
	cout << "The Total cash paid is: " << Cash << endl;

	cout << "\n***************************\n\n";
	cout << "The Remainder is: " << CalculateRemainder(Bill, Cash) << endl;
	

	return 0;
}