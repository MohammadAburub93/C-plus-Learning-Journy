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

stTimeElements ReadTimeElements(int TotalSeconds)
{
	stTimeElements time;

	int SecondRemainder = 0;

	const int SecondsPerDay = 86400;
	const int SecondsPerHour = 3600;
	const int SecondsPerMinute = 60;

	time.days = floor(TotalSeconds / SecondsPerDay);
	SecondRemainder = TotalSeconds % SecondsPerDay;

	time.hours = floor(SecondRemainder / SecondsPerHour);
	SecondRemainder = SecondRemainder % SecondsPerHour;

	time.minutes = floor(SecondRemainder / SecondsPerMinute);
	SecondRemainder = SecondRemainder % SecondsPerMinute;

	time.seconds = SecondRemainder;
	
	return time;
}


void PrintTimeElementsValues(stTimeElements Time, int TotalSeconds)
{
	cout << "The total seconds of " << TotalSeconds << " equal to the follwing in term of days:hours:minutes:seconds\n";
	cout << "\n******************\n";
	cout << Time.days << ":" << Time.hours << ":" << Time.minutes << ":" << Time.seconds << endl;
}


int main()
{
	int TotalSeconds = ReadPositiveNumber("Please enter a pistive number for total seconds.");

	PrintTimeElementsValues(ReadTimeElements(TotalSeconds), TotalSeconds);

	return 0;
}