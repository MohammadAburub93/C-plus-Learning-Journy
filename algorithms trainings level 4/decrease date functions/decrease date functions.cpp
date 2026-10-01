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

stDate DateAfterDecresingOneDay(stDate Date)
{
	if (Date.Day == 1)
	{
		if (Date.Month == 1)
		{
			Date.Day = 31;
			Date.Month = 12;
			Date.Year--;
		}
		else
		{
			Date.Day = NumberOfDaysInMonth(Date.Year, (Date.Month - 1));
			Date.Month--;
		}
	}
	else
	{
		Date.Day--;
	}

	return Date;

}

stDate DateAfterDecresingXDays(stDate Date, short NumberOfDays)
{
	for (int i = 1; i <= NumberOfDays; i++)
	{
		Date = DateAfterDecresingOneDay(Date);
	}

	return Date;
}

stDate DateAfterDecresingOneWeek(stDate Date)
{
	for (int i = 1; i <= 7; i++)
		Date = DateAfterDecresingOneDay(Date);

	return Date;
}

stDate DateAfterDecresingXWeeks(stDate Date, short NumberOfWeeks)
{
	for (int i = 1; i <= NumberOfWeeks; i++)
		Date = DateAfterDecresingOneWeek(Date);

	return Date;
}

stDate DateAfterDecresingOneMonth(stDate Date)
{
	if (Date.Month == 1)
	{
		Date.Month = 12;
		Date.Year--;
	}
	else
	{
		Date.Month--;
	}

	short NumberOfDaysInCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);

	if (Date.Day > NumberOfDaysInCurrentMonth)
	{
		Date.Day = NumberOfDaysInCurrentMonth;
	}

	return Date;
}

stDate DateAfterDecresingXMonths(stDate Date, short NumberOfMonths)
{
	for (int i = 1; i <= NumberOfMonths; i++)
		Date = DateAfterDecresingOneMonth(Date);

	return Date;
}

stDate DateAfterDecresingOneYear(stDate Date)
{
	Date.Year--;
	return Date;
}

stDate DateAfterDecresingXYears(stDate Date, short NumberOfYears)
{
	for (int i = 1; i <= NumberOfYears; i++)
		Date = DateAfterDecresingOneYear(Date);

	return Date;
}

stDate DateAfterDecresingXYearsFaster(stDate Date, short NumberOfYears)
{
	Date.Year -= NumberOfYears;
	return Date;
}


int main()
{
	stDate Date = ReadFullDate();

	Date = DateAfterDecresingOneDay(Date);

	cout << "\n\nDate after Decresing one day is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterDecresingXDays(Date, 10);

	cout << "Date after Decresing 10 days is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterDecresingOneWeek(Date);

	cout << "Date after Decresing One Week is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterDecresingXWeeks(Date, 10);

	cout << "Date after Decresing 10 Weeks is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterDecresingOneMonth(Date);

	cout << "Date after Decresing One Month is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterDecresingXMonths(Date, 5);

	cout << "Date after Decresing 5 Months is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterDecresingOneYear(Date);

	cout << "Date after Decresing One Year is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterDecresingXYears(Date, 10);

	cout << "Date after Decresing 10 Years is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterDecresingXYearsFaster(Date, 10);

	cout << "Date after Decresing 10 Years (Faster) is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	system("pause>0");

	return 0;
}