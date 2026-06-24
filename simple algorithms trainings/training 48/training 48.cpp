#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
	int number;

	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < 0);

	return number;
}

float CalculateNumberOfPayments(int TotalLoan, int TotalMonths)
{
	return (float)TotalLoan / TotalMonths;
}
int main()
{
	int TotalLoan = 0, TotalMonths = 0;

	TotalLoan = ReadPositiveNumber("Please enter the total amount of loan you have.");
	TotalMonths = ReadPositiveNumber("Please enter the number of months you will pay.");

	cout << "The total number of months you have to pay is: " << CalculateNumberOfPayments(TotalLoan, TotalMonths) << " Months.\n";

	return 0;
}