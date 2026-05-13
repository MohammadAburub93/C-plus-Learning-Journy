#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int total_sec, days, hours, min, sec, remainder_sec;

	cout << "Please enter the total value of seconds." << endl;
	cin >> total_sec;

	days = total_sec / 86400;
	remainder_sec = total_sec - (days * 86400);

	hours = remainder_sec / 3600;
	remainder_sec = remainder_sec - (hours * 3600);

	min = remainder_sec / 60;
	remainder_sec = remainder_sec - (min * 60);

	sec = remainder_sec;

	cout << "This value of second in form of days:hours:minutes:seconds is: " << round(days) << ":" << round(hours) << ":" << round(min) << ":" << round(sec) << endl;
	

	return 0;
}