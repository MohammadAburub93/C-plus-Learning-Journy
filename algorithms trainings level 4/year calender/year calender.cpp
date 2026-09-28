#include <iostream>
#include <iomanip>
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

short DayOrder(short Year, short Month, short Day)
{
	short a = (14 - Month) / 12;
	short y = Year - a;
	short m = Month + 12 * a - 2;

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayName(short DayOrder)
{
	string DaysName[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

	return DaysName[DayOrder];
}

string MonthShortName(short Month)
{
	string MonthsName[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

	return MonthsName[Month - 1];
}

void PrintMonthCalender(short Year, short Month)
{

	short Order = DayOrder(Year, Month, 1);
	short NumberOfDays = NumberOfDaysInMonth(Year, Month);

	cout << "\n__________________" << MonthShortName(Month) << "_______________\n\n";

	cout << setw(5) << "Sun" << setw(5) << "Mon" << setw(5) << "Tue" << setw(5) << "Wed"
		<< setw(5) << "Thu" << setw(5) << "Fri" << setw(5) << "Sat\n";

	for (short i = 0; i < 7; i++)
	{
		if (i < Order)
			cout << left << setw(5) << "";
	}
	for (short j = 1; j <= NumberOfDays; j++)
	{

		cout << setw(5) << j;
		Order++;


		if (Order == 7)
		{
			Order = 0;
			cout << endl;
		}
	}

	cout << "\n____________________________________\n";
}

void PrintYearCalender(short Year)
{
	cout << "\n____________________________________\n\n";
	cout << "              " << Year << "          \n";
	cout << "____________________________________\n\n";

	for (short month = 1; month <= 12; month++)
		PrintMonthCalender(Year, month);
}

int main()
{
	short Year = ReadYear();

	PrintYearCalender(Year);

	system("pause>0");

	return 0;
}