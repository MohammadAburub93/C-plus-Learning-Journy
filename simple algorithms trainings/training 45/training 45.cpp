#include <iostream>

using namespace std;

void read_month(short& month)
{
	cout << "Please enter the month number?" << endl;
	cin >> month;
}

void print_month_name(short month)
{
	if (month == 1)
	{
		cout << "It's January" << endl;
	}
	else if (month == 2)
	{
		cout << "It's February" << endl;
	}
	else if (month == 3)
	{
		cout << "It's March" << endl;
	}
	else if (month == 4)
	{
		cout << "It's April" << endl;
	}
	else if (month == 5)
	{
		cout << "It's May" << endl;
	}
	else if (month == 6)
	{
		cout << "It's June" << endl;
	}
	else if (month == 7)
	{
		cout << "It's July" << endl;
	}
	else if (month == 8)
	{
		cout << "It's August" << endl;
	}
	else if (month == 9)
	{
		cout << "It's September" << endl;
	}
	else if (month == 10)
	{
		cout << "It's October" << endl;
	}
	else if (month == 11)
	{
		cout << "It's November" << endl;
	}
	else if (month == 12)
	{
		cout << "It's December" << endl;
	}
	else
	{
		cout << "Wrong Month" << endl;
	}
}

int main()
{
	short month;

	read_month(month);
	print_month_name(month);


	return 0;
}