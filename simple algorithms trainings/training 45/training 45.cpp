#include <iostream>

using namespace std;

void read_month(short& month)
{
	cout << "Please enter the month number?" << endl;
	cin >> month;
}

void print_month_name(short month)
{
	switch (month) {

	case 1:
		cout << "It's January" << endl;
		break;
	case 2:
		cout << "It's February" << endl;
		break;
	case 3:
		cout << "It's March" << endl;
		break;
	case 4:
		cout << "It's April" << endl;
		break;
	case 5:
		cout << "It's May" << endl;
		break;
	case 6:
		cout << "It's June" << endl;
		break;
	case 7:
		cout << "It's July" << endl;
		break;
	case 8:
		cout << "It's August" << endl;
		break;
	case 9:
		cout << "It's September" << endl;
		break;
	case 10:
		cout << "It's October" << endl;
		break;
	case 11:
		cout << "It's November" << endl;
		break;
	case 12:
		cout << "It's December" << endl;
		break;
	default:
		cout << "Not a valid month number" << endl;
	}
}

int main()
{
	short month;

	read_month(month);
	print_month_name(month);


	return 0;
}