#include <iostream>
using namespace std;

void read_marks(short& mark1, short& mark2, short& mark3)
{

	cout << "Please enter the value of first mark ?" << endl;
	cin >> mark1;

	cout << "Please enter the value of second mark ?" << endl;
	cin >> mark2;

	cout << "Please enter the value of third mark ?" << endl;
	cin >> mark3;

}

int marks_sum(short mark1, short mark2, short mark3)
{
	int result;

	result = mark1 + mark2 + mark3;

	return result;
}

float marks_average(short mark1, short mark2, short mark3)
{
	return (float)marks_sum(mark1, mark2, mark3) / 3;
}

void print_sum(float result)
{
	cout << "The average of the marks is: " << result << endl;
}

int main()
{
	short mark1, mark2, mark3;

	read_marks(mark1, mark2, mark3);
	print_sum(marks_average(mark1, mark2, mark3));

	return 0;
}