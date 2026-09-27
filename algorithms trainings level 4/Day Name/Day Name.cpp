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

int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();
	short Day = ReadDay();

	cout << "Date      : " << Day << "/" << Month << "/" << Year << endl;
	cout << "Day Order : " << DayOrder(Year, Month, Day) << endl;
	cout << "Day Name  : " << DayName(DayOrder(Year, Month, Day)) << endl;
	system("pause>0");

	return 0;
}