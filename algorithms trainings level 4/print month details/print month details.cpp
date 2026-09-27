#include <iostream>

using namespace std;

short ReadYear()
{
	short Number;

	cout << "Please Enter a year to check? ";
	cin >> Number;

	return Number;
}

short ReadMonth()
{
	short Number;

	cout << "Please Enter a Month to check? ";
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

	if (Month == 2)
		return (IsLeapYear(Year) ? 29 : 28);

	short arr31Days[12] = { 1, 3, 5, 7, 8, 10, 12 };

	for (short i = 1; i <= 12; i++)
	{
		if (arr31Days[i - 1] == Month)
			return 31;
	}

	return 30;

}

short NumberOfHoursInYear(short Year, short Month)
{
	return NumberOfDaysInMonth(Year, Month) * 24;
}

int NumberOfMinutesInYear(short Year, short Month)
{
	return NumberOfHoursInYear(Year, Month) * 60;
}
int NumberOfSecondsInYear(short Year, short Month)
{
	return NumberOfMinutesInYear(Year, Month) * 60;
}

int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();

	cout << "\nNumber of Days    in Year [" << Month << "] is " << NumberOfDaysInMonth(Year, Month) << endl;
	cout << "Number of Hours   in Year [" << Month << "] is " << NumberOfHoursInYear(Year, Month) << endl;
	cout << "Number of Minutes in Year [" << Month << "] is " << NumberOfMinutesInYear(Year, Month) << endl;
	cout << "Number of Seconds in Year [" << Month << "] is " << NumberOfSecondsInYear(Year, Month) << endl;

	system("pause>0");

	return 0;
}

