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

short ReadNumberOfAddingDays()
{
	short Number;

	cout << "How many days to add? ";
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

stDate ExtractDateFromNumberOfDaysInYear(short DaysCountInYear, short Year)
{
	stDate Date;
	short RemainingDays = DaysCountInYear;
	short MonthDays = 0;

	Date.Year = Year;
	Date.Month = 1;

	while (true)
	{
		MonthDays = NumberOfDaysInMonth(Date.Year, Date.Month);

		if (RemainingDays > MonthDays)
		{
			Date.Month++;
			RemainingDays -= MonthDays;
		}
		else
		{
			Date.Day = RemainingDays;
			break;
		}
	}

	return Date;
}

stDate DateAfterAddingDays(short DaysAdded, stDate Date)
{
	short RemainingDays = DaysAdded;
	short MonthDays = 0;

	while (true)
	{
		MonthDays = NumberOfDaysInMonth(Date.Year, Date.Month);

		if (RemainingDays <= (MonthDays - Date.Day))
		{
			Date.Day += RemainingDays;
			break;
		}
		else
		{
			RemainingDays -= (MonthDays - Date.Day);
			Date.Month++;
			Date.Day = 0;

			if (Date.Month > 12)
			{
				Date.Year++;
				Date.Month = 1;
			}
		}

	}

	return Date;
}


int main()
{
	stDate Date = ReadFullDate();
	short AddedDays = ReadNumberOfAddingDays();

	Date = DateAfterAddingDays(AddedDays, Date);

	cout << "Date after adding [" << AddedDays << "] days is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	system("pause>0");

	return 0;
}