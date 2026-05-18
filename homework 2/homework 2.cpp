#include <iostream>
using namespace std;


void add()
{
	float num1, num2, num3;

	cout << "please enter your first number?\n";
	cin >> num1;

	cout << "please enter your second number?\n";
	cin >> num2;

	cout << "please enter your third number?\n";
	cin >> num3;

	cout << num1 << "+" << endl;
	cout << num2 << "+" << endl;
	cout << num3 << endl;
	cout << "__________________\n\n";
	cout << "Total = " << num1 + num2 + num3 << endl;
}
int main()
{
	add();

	return 0;
}