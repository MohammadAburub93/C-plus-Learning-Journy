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

float CalculateNumberOfMonths(int TotalLoan, int MonthlyPayment)
{
	return (float) TotalLoan / MonthlyPayment;
}
int main()
{
	int TotalLoan = 0, MonthlyPayment = 0;

	TotalLoan = ReadPositiveNumber("Please enter the total amount of loan you have.");
	MonthlyPayment = ReadPositiveNumber("Please enter the monthly payment you pay.");

	cout << "The total number of months you have to pay is: " << CalculateNumberOfMonths(TotalLoan, MonthlyPayment) << " Months.\n";

	return 0;
}