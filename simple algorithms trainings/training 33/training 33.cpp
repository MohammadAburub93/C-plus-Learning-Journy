#include <iostream>

using namespace std;

void read_mark(int &mark)
{
	cout << "Please enter your mark?" << endl;
	cin >> mark;
}

void print_grade(int mark)
{
	if (mark <= 100 and mark >= 90)
	{
		cout << "Your grade is: A" << endl;
	}
	else if (mark < 90 and mark >= 80)
	{
		cout << "Your grade is: B" << endl;
	}
	else if (mark < 80 and mark >= 70)
	{
		cout << "Your grade is: C" << endl;
	}
	else if (mark < 70 and mark >= 60)
	{
		cout << "Your grade is: D" << endl;
	}
	else if (mark < 60 and mark >= 50)
	{
		cout << "Your grade is: E" << endl;
	}
	else
	{
		cout << "Your grade is: F" << endl;
	}
}

int main()
{
	int mark;

	read_mark(mark);
	print_grade(mark);


	return 0;
}