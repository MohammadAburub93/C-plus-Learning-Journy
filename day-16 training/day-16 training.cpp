#include <iostream>

using namespace std;

void read_grades(float grades[3])
{
	cout << "Please enter the first grade?\n";
	cin >> grades[0];

	cout << "Please enter the second grade?\n";
	cin >> grades[1];

	cout << "Please enter the third grade?\n";
	cin >> grades[2];
}

void print_average(float grades[3])
{
	float avg;

	avg = (grades[0] + grades[1] + grades[2]) / 3;

	cout << "\n**************************\n";

	cout << "The average of your grades is: " << avg << endl;
}

int main()
{
	float grades[3];

	read_grades(grades);
	print_average(grades);

	return 0;
}