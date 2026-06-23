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

float CalculateDays(float hours)
{
	return hours / 24;
}

float CalculateWeeks(float hours)
{
	return (hours / 24) / 7;
}
int main()
{
	float Hours = ReadPositiveNumber("Please enter a positive number of hours.");

	cout << "The number of days in " << Hours << " hours are: " << CalculateDays(Hours) << endl;
	cout << "The number of days in " << Hours << " hours are: " << CalculateWeeks(Hours) << endl;

	return 0;
}
