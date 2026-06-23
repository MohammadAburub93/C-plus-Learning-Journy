#include <iostream>
#include <cmath>

using namespace std;

struct stTimeElements
{
	int days, hours, minutes, seconds;
};

int ReadPositiveNumber(string message)
{
	int number = 0;

	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

stTimeElements ReadTimeElements()
{
	stTimeElements time;

	time.days = ReadPositiveNumber("Please enter the number of days.");
	time.hours = ReadPositiveNumber("Please enter the number of hours.");
	time.minutes = ReadPositiveNumber("Please enter the number of minutes.");
	time.seconds = ReadPositiveNumber("Please enter the number of seconds.");

	return time;
}


int SecondsCalculation(stTimeElements time)
{
	int TotalTimeInSeconds = 0;

	TotalTimeInSeconds = time.days * 86400;
	TotalTimeInSeconds += time.hours * 3600;
	TotalTimeInSeconds += time.minutes * 60;
	TotalTimeInSeconds += time.seconds;

	return TotalTimeInSeconds;
}


int main()
{
	stTimeElements Time = ReadTimeElements();

	cout << "The total second of your task is: " << round(SecondsCalculation(Time)) << endl;

	return 0;
}