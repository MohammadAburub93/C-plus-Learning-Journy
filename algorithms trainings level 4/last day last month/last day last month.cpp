#include <iostream>

using namespace std;

struct stDate {
	short Day = 0;
	short Month = 0;
	short Year = 0;
};

short ReadYear()
{
	short Number;

	cout << "Please Enter a year? ";
	cin >> Number;

	return Number;
}

short ReadMonth()
{
	short Number;

	cout << "Please Enter a Month? ";
	cin >> Number;

	return Number;
}

short ReadDay()
{
	short Number;

	cout << "Please Enter a Day? ";
	cin >> Number;

	return Number;
}
stDate ReadFullDate()
{
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
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

bool IsLastDayOfMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month));
}

bool IsLastMonthOfYear(short Month)
{
	return (Month == 12);
}



int main()
{
	stDate Date = ReadFullDate();

	if (IsLastDayOfMonth(Date))
		cout << "\nYes, Day is last day in the month.\n";
	else
		cout << "\nNo, Day is not last day in the month.\n";

	if (IsLastMonthOfYear(Date.Month))
		cout << "\nYes, Month is last Month in the Year.\n";
	else
		cout << "\nNo, Month is not last Month in the Year.\n";

	system("pause>0");

	return 0;
}