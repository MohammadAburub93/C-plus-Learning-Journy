#include <iostream>

using namespace std;

enum enPassFail {pass = 1, fail = 2};

void read_marks(int marks[3])
{
	cout << "Please enter the first mark?" << endl;
	cin >> marks[0];
	
	cout << "Please enter the second mark?" << endl;
	cin >> marks[1];

	cout << "Please enter the third mark?" << endl;
	cin >> marks[2];
}

int marks_sum(int marks[3])
{
	return marks[0] + marks[1] + marks[2];
	
}

float calc_avg(int marks[3])
{
	return (float)marks_sum(marks)/ 3;

}

enPassFail check_average(float average)
{
	if (average >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}

void print_result(float average)
{
	cout << "\nYour average is: " << average << endl;

	if (check_average(average) == enPassFail::pass)
		cout << "You Passed!" << endl;
	else
		cout << "You failed!" << endl;
}

int main()
{
	int marks[3];

	read_marks(marks);
	print_result(calc_avg(marks));

	return 0;
}