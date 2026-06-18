#include <iostream>

using namespace std;

enum enWeekDays {Sun=1, Mon=2, Tue=3, Wed=4, Thu=5, Fri=6, Sat=7};

void show_days_menu()
{
	cout << "****************************" << endl;
	cout << "           Week Days        " << endl;
	cout << "****************************" << endl;
	cout << "1: Sunday" << endl;
	cout << "2: Monday" << endl;
	cout << "3: Tuesday" << endl;
	cout << "4: Wednesday" << endl;
	cout << "5: Thursday" << endl;
	cout << "6: Friday" << endl;
	cout << "7: Saturday" << endl;
	cout << "****************************" << endl;
	cout << "Please enter the number of the day?" << endl;
}

enWeekDays read_week_day()
{
	enWeekDays week_day;
	

	int wd;

	cin >> wd;
	return (enWeekDays)wd;
}

string get_week_day(enWeekDays week_day)
{
	switch (week_day) {

	case enWeekDays::Sun:
		return "Sunday";
		break;
	case enWeekDays::Mon:
		return "Monday";
		break;
	case enWeekDays::Tue:
		return "Tuesday";
		break;
	case enWeekDays::Wed:
		return "Wednesday";
		break;
	case enWeekDays::Thu:
		return "Thursday";
		break;
	case enWeekDays::Fri:
		return "Friday";
		break;
	case enWeekDays::Sat:
		return "Saturday";
		break;
	default:
		return "Not a week day";
	}
}

int main()
{
	string day_name;


	show_days_menu();
	day_name = get_week_day(read_week_day());

	cout << "The day is: " << day_name << endl;

	return 0;
}