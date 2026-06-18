#include <iostream>

using namespace std;

void read_day(short &day)
{
	cout << "Please enter thr day number?" << endl;
	cin >> day;
}

void print_day_name(short day)
{
	
	switch (day) {

	case 1:
		cout << "It's Sunday" << endl;
		break;
	case 2:
		cout << "It's Monday" << endl;
		break;
	case 3:
		cout << "It's Tuesday" << endl;
		break;
	case 4:
		cout << "It's Wednesday" << endl;
		break;
	case 5:
		cout << "It's Thursday" << endl;
		break;
	case 6:
		cout << "It's Friday" << endl;
		break;
	case 7:
		cout << "It's Saturday" << endl;
		break;
	default:
		cout << "Not a valid day number\n";
	}
	
}

int main()
{
	short day;
	
	read_day(day);
	print_day_name(day);


	return 0;
}