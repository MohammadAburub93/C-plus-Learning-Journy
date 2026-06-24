#include <iostream>

using namespace std;

enum enWeekDays {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

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

enWeekDays ReadWeekDayNumber()
{
	return (enWeekDays)ReadNumberInRange("Please enter the day number between 1 and 7?", 1, 7);
}

string GetWeekDay(enWeekDays day)
{
	
	switch (day) {

	case enWeekDays :: Sun:
		return "Sunday";
	case enWeekDays::Mon:
		return "Monday";
	case enWeekDays::Tue:
		return "Tuesday";
	case enWeekDays::Wed:
		return "Wednesday";
	case enWeekDays::Thu:
		return "Thursday";
	case enWeekDays::Fri:
		return "Friday";
	case enWeekDays::Sat:
		return "Saturday";
	default:
		return "Not a valid day number\n";
	}
	
}

int main()
{
	string WeekDay;

	WeekDay = GetWeekDay(ReadWeekDayNumber());
	cout << "\nBased on the number you give it's " << WeekDay << endl;

	return 0;
}