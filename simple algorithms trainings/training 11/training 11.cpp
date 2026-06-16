#include <iostream>

using namespace std;

void read_marks(float marks[3])
{
	cout << "Please enter the first mark?" << endl;
	cin >> marks[0];
	
	cout << "Please enter the second mark?" << endl;
	cin >> marks[1];

	cout << "Please enter the third mark?" << endl;
	cin >> marks[2];
}

float calc_avg(float marks[3])
{
	float avg;

	avg = (marks[0] + marks[1] + marks[2]) / 3;

	return avg;
}

void check_result(float avg)
{
	cout << avg << endl;

	if (avg >= 50)
	{
		cout << "Pass!" << endl;
	}
	else
	{
		cout << "Fail!" << endl;
	}
}

int main()
{
	float marks[3], avg;

	read_marks(marks);
	avg = calc_avg(marks);
	check_result(avg);

	return 0;
}