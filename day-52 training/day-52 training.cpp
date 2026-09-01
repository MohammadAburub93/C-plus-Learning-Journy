#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t t = time(0);

	tm* now = localtime(&t);

	cout << "Year: " << now->tm_year + 1900 << endl;
	cout << "Month: " << now->tm_mon + 1 << endl;
	cout << "Day: " << now->tm_mday << endl;
	cout << "Hour: " << now->tm_hour << endl;
	cout << "Min: " << now->tm_min << endl;
	cout << "Second: " << now->tm_sec << endl;
	cout << "Week day (days since sunday): " << now->tm_wday << endl;
	cout << "Year day (days since Jan 1st): " << now->tm_yday << endl;
	cout << "Hours of daylight savings time: " << now->tm_isdst << endl;
		
	return 0;
} 