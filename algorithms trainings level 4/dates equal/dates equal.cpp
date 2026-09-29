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

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
	return ((Date1.Year == Date2.Year && Date1.Month == Date2.Month && Date1.Day == Date2.Day) ? true : false);
}


int main()
{
	stDate Date1 = ReadFullDate();

	cout << "\n\n";

	stDate Date2 = ReadFullDate();

	if (IsDate1EqualDate2(Date1, Date2))
		cout << "\nYes, Date 1 is equal Date 2.\n";
	else
		cout << "\nNo, Date 1 is not equal Date 2.\n";

	system("pause>0");

	return 0;
}