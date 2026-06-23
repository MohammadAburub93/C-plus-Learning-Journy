#include <iostream>

using namespace std;

int read_number_in_range(int from, int to)
{
	int mark;

	do
	{
		cout << "Please enter your mark between from " << from << " to " << to << endl;
		cin >> mark;
	} while (mark < from || mark > to);

	return mark;
}

char get_grade_letter(int mark)
{
	if (mark >= 90)
		return 'A';
	else if (mark >= 80)
		return 'B';
	else if (mark >= 70)
		return 'C';
	else if (mark >= 60)
		return 'D';
	else if (mark >= 50)
		return 'E';
	else
		return 'F';
}

int main()
{
	cout << "Your grade is: " << get_grade_letter(read_number_in_range(0, 100)) << endl;;

	return 0;
}