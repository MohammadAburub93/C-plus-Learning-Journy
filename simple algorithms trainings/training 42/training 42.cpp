#include <iostream>
#include <cmath>

using namespace std;

int sec_calc(short days, short hours, short min, short sec)
{
	return ((days * 86400) + (hours * 3600) + (min * 60) + sec);
}


int main()
{

	short int days, hours, min, sec;
	int total_sec;

	cout << "Please enter the number of days.\n";
	cin >> days;

	cout << "Please enter the number of hours.\n";
	cin >> hours;

	cout << "Please enter the number of minutes.\n";
	cin >> min;

	cout << "Please enter the number of seconds.\n";
	cin >> sec;

	total_sec = sec_calc(days, hours, min, sec);

	cout << "The total second of your task is: " << round(total_sec) << endl;


	return 0;
}