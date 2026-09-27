#include <iostream>

using namespace std;

short ReadYear()
{
	short Number;

	cout << "Please Enter a year to check? ";
	cin >> Number;

	return Number;
}

short ReadMonth()
{
	short Number;

	cout << "Please Enter a Month to check? ";
	cin >> Number;

	return Number;
}

bool IsLeapYear(short Year)
{
	return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}

short NumberOfDaysInMonth(short Year, short Month)
{
	if (Month < 1 || Month > 12)
		return 0;

	short NumberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	return (Month == 2 ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1]);

}

short NumberOfHoursInYear(short Year, short Month)
{
	return NumberOfDaysInMonth(Year, Month) * 24;
}

int NumberOfMinutesInYear(short Year, short Month)
{
	return NumberOfHoursInYear(Year, Month) * 60;
}
int NumberOfSecondsInYear(short Year, short Month)
{
	return NumberOfMinutesInYear(Year, Month) * 60;
}

int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();

	cout << "\nNumber of Days    in Year [" << Month << "] is " << NumberOfDaysInMonth(Year, Month) << endl;
	cout << "Number of Hours   in Year [" << Month << "] is " << NumberOfHoursInYear(Year, Month) << endl;
	cout << "Number of Minutes in Year [" << Month << "] is " << NumberOfMinutesInYear(Year, Month) << endl;
	cout << "Number of Seconds in Year [" << Month << "] is " << NumberOfSecondsInYear(Year, Month) << endl;

	system("pause>0");

	return 0;
}

