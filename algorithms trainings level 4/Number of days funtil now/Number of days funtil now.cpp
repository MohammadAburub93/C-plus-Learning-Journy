#include <iostream>

using namespace std;

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

short NumberOfDayFromBeginingOfYear(short Year, short Month, short Day)
{
	short DaysCount = Day;

	for (short i = 1; i < Month; i++)
		DaysCount += NumberOfDaysInMonth(Year, i);

	return DaysCount;
}


int main()
{
	short Day = ReadDay();
	short Month = ReadMonth();
	short Year = ReadYear();

	cout << "\nNumber of Days from the begining of the year is "<< NumberOfDayFromBeginingOfYear(Year, Month, Day) << endl;

	system("pause>0");

	return 0;
}