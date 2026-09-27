#include <iostream>

using namespace std;

int ReadYear()
{
	int Number;

	cout << "Please Enter a year? ";
	cin >> Number;

	return Number;
}

bool IsLeapYear(int Year)
{
	if (Year % 400 == 0)
		return true;
	else
	{
		if (Year % 4 == 0 && Year % 100 != 0)
			return true;
		else
			return false;
	}
}

int main()
{
	int Year = ReadYear();

	if (IsLeapYear(Year))
		cout << "\nYes, Year [" << Year << "] is a leap year." << endl;
	else
		cout << "\nNo, Year [" << Year << "] is not a leap year." << endl;
	
	system("pause>0");

	return 0;
}
