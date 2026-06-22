#include <iostream>

using namespace std;

void read_numbers(int& num1, int& num2, int &num3)
{
	cout << "Please enter the first number?\n";
	cin >> num1;

	cout << "Please enter the second number?\n";
	cin >> num2;

	cout << "Please enter the second number?\n";
	cin >> num3;
}

int max_num(int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}

void print_max_num(int num1, int num2, int num3)
{
	cout << "The max number is: " << max_num(num1, num2, num3) << endl;
}

int main()
{
	int num1, num2, num3;

	read_numbers(num1, num2, num3);
	print_max_num(num1, num2, num3);

	return 0;
}
