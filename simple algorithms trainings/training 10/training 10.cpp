#include <iostream>
using namespace std;

int main()
{
	float mark_1, mark_2, mark_3, marks_avg;

	cout << "Please enter the first mark you have?" << endl;
	cin >> mark_1;

	cout << "Please enter the second mark you have?" << endl;
	cin >> mark_2;

	cout << "Please enter the third mark you have?" << endl;
	cin >> mark_3;

	marks_avg = (mark_1 + mark_2 + mark_3) / 3;

	cout << "Your average will be: " << marks_avg << endl;

	return 0;
}