#include <iostream>
#include <string>

using namespace std;

enum enPassFail {pass = 1, fail = 2};

float read_mark()
{
	float mark;

	cout << "Please enter your mark?" << endl;
	cin >> mark;

	return mark;
}

enPassFail mark_pass(float mark)
{
	enPassFail result;
	if (mark >= 50)
		result = enPassFail::pass;
	else
		result = enPassFail::fail;

	return result;
}

void print_mark_result(float mark)
{
	if (mark_pass(mark) == enPassFail::pass)
		cout << "Based on your mark ("<< mark << ") your result is: Pass" << endl;
	else
		cout << "Based on your mark (" << mark << ") your result is: Fail" << endl;
}

int main()
{
	float user_mark;

	print_mark_result(read_mark());

	return 0;
}