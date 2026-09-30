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

stDate DateAfterAddingXDays(stDate Date, short NumberOfDays)
{
	for (int i = 1; i <= NumberOfDays; i++)
	{
		Date = DateAfterAddingOneDay(Date);
	}

	return Date;
}

stDate DateAfterAddingOneWeek(stDate Date)
{
	for (int i = 1; i <= 7; i++)
		Date = DateAfterAddingOneDay(Date);

	return Date;
}

stDate DateAfterAddingXWeeks(stDate Date, short NumberOfWeeks)
{
	for (int i = 1; i <= NumberOfWeeks; i++)
		Date = DateAfterAddingOneWeek(Date);

	return Date;
}

stDate DateAfterAddingOneMonth(stDate Date)
{
	if (IsLastMonthOfYear(Date.Month))
	{
		Date.Month = 1;
		Date.Year++;
	}
	else
	{
		Date.Month++;	
	}
	
	short NumberOfDaysInCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);
	
	if (Date.Day > NumberOfDaysInCurrentMonth)
	{
		Date.Day = NumberOfDaysInCurrentMonth;
	}

	return Date;
}

stDate DateAfterAddingXMonths(stDate Date, short NumberOfMonths)
{
	for (int i = 1; i <= NumberOfMonths; i++)
		Date = DateAfterAddingOneMonth(Date);

	return Date;
}

stDate DateAfterAddingOneYear(stDate Date)
{
	Date.Year++;
	return Date;
}

stDate DateAfterAddingXYears(stDate Date, short NumberOfYears)
{
	for (int i = 1; i <= NumberOfYears; i++)
		Date = DateAfterAddingOneYear(Date);

	return Date;
}

stDate DateAfterAddingXYearsFaster(stDate Date, short NumberOfYears)
{
	Date.Year += NumberOfYears;
	return Date;
}


int main()
{
	stDate Date = ReadFullDate();

	Date = DateAfterAddingOneDay(Date);

	cout << "\n\nDate after adding one day is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterAddingXDays(Date, 10);

	cout << "Date after adding 10 days is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterAddingOneWeek(Date);

	cout << "Date after adding One Week is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterAddingXWeeks(Date, 10);

	cout << "Date after adding 10 Weeks is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterAddingOneMonth(Date);

	cout << "Date after adding One Month is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterAddingXMonths(Date, 10);

	cout << "Date after adding 10 Months is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterAddingOneYear(Date);

	cout << "Date after adding One Year is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterAddingXYears(Date, 10);

	cout << "Date after adding 10 Years is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DateAfterAddingXYearsFaster(Date, 10);

	cout << "Date after adding 10 Years (Faster) is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	system("pause>0");

	return 0;
}