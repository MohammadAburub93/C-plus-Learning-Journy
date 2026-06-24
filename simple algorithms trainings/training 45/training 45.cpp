#include <iostream>

using namespace std;

enum enMonthsNames { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5,
	Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 };

int ReadNumberInRange(string message, int From, int To)
{
	int number;

	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < From || number > To);

	return number;
}

enMonthsNames ReadMonthNumber()
{
	return (enMonthsNames)ReadNumberInRange("Please enter the day number between 1 and 12?", 1, 12);
}

string GetMonthName(enMonthsNames day)
{

	switch (day) {

	case enMonthsNames::Jan:
		return "January";
	case enMonthsNames::Feb:
		return "February";
	case enMonthsNames::Mar:
		return "March";
	case enMonthsNames::Apr:
		return "April";
	case enMonthsNames::May:
		return "May";
	case enMonthsNames::Jun:
		return "June";
	case enMonthsNames::Jul:
		return "July";
	case enMonthsNames::Aug:
		return "August";
	case enMonthsNames::Sep:
		return "September";
	case enMonthsNames::Oct:
		return "October";
	case enMonthsNames::Nov:
		return "November";
	case enMonthsNames::Dec:
		return "December";
	default:
		return "Not a valid month number\n";
	}

}

int main()
{
	string MonthName;

	MonthName = GetMonthName(ReadMonthNumber());
	cout << "\nBased on the number you give it's " << MonthName << endl;

	return 0;
}