#include <iostream>

using namespace std;

void read_numbers(int &num1, int &num2)
{
	cout << "Please enter the first number?\n";
	cin >> num1;

	cout << "Please enter the second number?\n";
	cin >> num2;
}

int check_max_num(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

void print_max_num(int num1, int num2)
{
	cout << "The max number is: " << check_max_num(num1, num2) << endl;
}

int main()
{
	int num1, num2;

	read_numbers(num1, num2);
	print_max_num(num1, num2);

	return 0;
}