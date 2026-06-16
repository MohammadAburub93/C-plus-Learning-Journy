#include <iostream>

using namespace std;

void read_mark(float &mark)
{
	cout << "Please enter your mark?" << endl;
	cin >> mark;
}

void check_mark(float user_mark)
{
	if (user_mark >= 50)
	{
		cout << "Pass" << endl;
	}
	else
	{
		cout << "Fail" << endl;
	}
}

int main()
{
	float user_mark;

	read_mark(user_mark);
	check_mark(user_mark);

	return 0;
}