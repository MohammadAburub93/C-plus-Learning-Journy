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

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

void SwapDates(stDate& Date1, stDate& Date2)
{
	stDate TempDate;

	TempDate.Day = Date1.Day;
	TempDate.Month = Date1.Month;
	TempDate.Year = Date1.Year;

	Date1.Day = Date2.Day;
	Date1.Month = Date2.Month;
	Date1.Year = Date2.Year;

	Date2.Day = TempDate.Day;
	Date2.Month = TempDate.Month;
	Date2.Year = TempDate.Year;
}

int DiffBetweenDates(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
	int DiffDays = 0;
	short SwapFlagValue = 1;

	if (!IsDate1BeforeDate2(Date1, Date2))
	{
		SwapDates(Date1, Date2);
		SwapFlagValue = -1;
	}
	
	while (!IsDate1EqualDate2(Date1, Date2))
	{
		DiffDays++;
		Date1 = DateAfterAddingOneDay(Date1);
	}
	
	
	
	return (IncludeEndDay ? ++DiffDays * SwapFlagValue : DiffDays * SwapFlagValue);
}


int main()
{
	stDate Date1 = ReadFullDate();
	cout << "\n\n";
	stDate Date2 = ReadFullDate();

	cout << "\nDifference is: " << DiffBetweenDates(Date1, Date2);
	cout << "\nDifference (Including End Day) is: " << DiffBetweenDates(Date1, Date2, true);

	system("pause>0");

	return 0;
}