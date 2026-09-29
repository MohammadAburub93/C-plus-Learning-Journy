#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>
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

stDate DateAfterAddingOneDay(stDate Date)
{
	if (IsLastDayOfMonth(Date))
	{
		if (IsLastMonthOfYear(Date.Month))
		{
			Date.Day = 1;
			Date.Month = 1;
			Date.Year++;
		}
		else
		{
			Date.Day = 1;
			Date.Month++;
		}
	}
	else
	{
		Date.Day++;
	}

	return Date;

}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
	return ((Date1.Year == Date2.Year && Date1.Month == Date2.Month && Date1.Day == Date2.Day) ? true : false);
}

int DiffBetweenDates(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
	int DiffDays = 0;

	while (!IsDate1EqualDate2(Date1, Date2))
	{
		DiffDays++;
		Date1 = DateAfterAddingOneDay(Date1);
	}

	return (IncludeEndDay ? ++DiffDays : DiffDays);
}

stDate GetSystemDate()
{
	stDate Date;

	time_t t = time(0);
	tm* now = localtime(&t);

	Date.Day = now->tm_mday;
	Date.Month = now->tm_mon + 1;
	Date.Year = now->tm_year + 1900;

	return Date;
}


int main()
{
	cout << "Please Enter your birth date: \n\n";

	stDate Date1 = ReadFullDate();

	stDate Date2 = GetSystemDate();

	cout << "\nYour age is: " << DiffBetweenDates(Date1, Date2) << " Days.\n";

	system("pause>0");

	return 0;
}