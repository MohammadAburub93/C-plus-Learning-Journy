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

short NumberOfDayFromBeginingOfYear(short Year, short Month, short Day)
{
	short DaysCount = Day;

	for (short i = 1; i < Month; i++)
		DaysCount += NumberOfDaysInMonth(Year, i);

	return DaysCount;
}

bool IsDate1LessThanDate2(stDate Date1, stDate Date2)
{
	short Date1NumberOfDays = NumberOfDayFromBeginingOfYear(Date1.Year, Date1.Month, Date1.Day);
	short Date2NumberOfDays = NumberOfDayFromBeginingOfYear(Date2.Year, Date2.Month, Date2.Day);

	return (Date1.Year != Date2.Year ? (Date1.Year < Date2.Year ? true : false) : (Date1NumberOfDays < Date2NumberOfDays ? true : false));
}


int main()
{
	stDate Date1 = ReadFullDate();

	cout << "\n\n";

	stDate Date2 = ReadFullDate();
	
	if (IsDate1LessThanDate2(Date1, Date2))
		cout << "\nYes, Date 1 is less than Date 2.\n";
	else
		cout << "\nNo, Date 1 is not less than Date 2.\n";

	system("pause>0");

	return 0;
}