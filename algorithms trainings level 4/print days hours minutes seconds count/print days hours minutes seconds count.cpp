#include <iostream>

using namespace std;

short ReadYear()
{
	short Number;

	cout << "Please Enter a year to check? ";
	cin >> Number;

	return Number;
}

bool IsLeapYear(short Year)
{
	return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

short NumberOfDaysInYear(short Year)
{
	return (IsLeapYear(Year) ? 366 : 365);
}

short NumberOfHoursInYear(short Year)
{
	return NumberOfDaysInYear(Year) *  24;
}

int NumberOfMinutesInYear(short Year)
{
	return NumberOfHoursInYear(Year) * 60;
}
int NumberOfSecondsInYear(short Year)
{
	return NumberOfMinutesInYear(Year) * 60;
}

int main()
{
	short Year = ReadYear();

	cout << "\nNumber of Days    in Year [" << Year << "] is " << NumberOfDaysInYear(Year)  << endl;
	cout << "Number of Hours   in Year [" << Year << "] is " << NumberOfHoursInYear(Year)  << endl;
	cout << "Number of Minutes in Year [" << Year << "] is " << NumberOfMinutesInYear(Year) << endl;
	cout << "Number of Seconds in Year [" << Year << "] is " << NumberOfSecondsInYear(Year) << endl;

	system("pause>0");

	return 0;
}
