#include <iostream>

using namespace std;

void read_day(short &day)
{
	cout << "Please enter thr day number?" << endl;
	cin >> day;
}

void print_day_name(short day)
{
	if (day == 1)
	{
		cout << "It's Sunday" << endl;
	}
	else if (day == 2)
	{
		cout << "It's Monday" << endl;
	}
	else if (day == 3)
	{
		cout << "It's Tuesday" << endl;
	}
	else if (day == 4)
	{
		cout << "It's Wednesday" << endl;
	}
	else if (day == 5)
	{
		cout << "It's Thursday" << endl;
	}
	else if (day == 6)
	{
		cout << "It's Friday" << endl;
	}
	else if (day == 7)
	{
		cout << "It's Saturday" << endl;
	}
	else
	{
		cout << "Wrong day" << endl;
	}
}

int main()
{
	short day;
	
	read_day(day);
	print_day_name(day);


	return 0;
}