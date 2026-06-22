#include <iostream>
using namespace std;


void read_numbers(int &num1, int &num2)
{
	cout << "Please enter the first number?\n";
	cin >> num1;

	cout << "Please enter the second number?\n";
	cin >> num2;
}

void num_swap(int &num1, int &num2)
{
	int swap_num;

	swap_num = num1;

	num1 = num2;
	num2 = swap_num;
}

void print_numbers_value(int num1, int num2)
{
	cout << "First number is " << num1 << " and second number is " << num2 << "\n\n";
}

int main()
{
	int num1, num2;

	read_numbers(num1, num2);
	print_numbers_value(num1, num2);
	num_swap(num1, num2);
	print_numbers_value(num1, num2);

	return 0;

}
