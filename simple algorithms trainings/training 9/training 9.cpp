#include <iostream>
using namespace std;

void read_numbers(float &num1, float &num2, float &num3)
{

	cout << "Please enter the value of first number ?" << endl;
	cin >> num1;

	cout << "Please enter the value of second number ?" << endl;
	cin >> num2;

	cout << "Please enter the value of third number ?" << endl;
	cin >> num3;

}

float number_sum(float num1, float num2, float num3)
{
	float result;

	result = num1 + num2 + num3;

	return result;
}

void print_sum(float result)
{
	cout << "The sum of all numbers is: " << result << endl;
}

int main()
{
	float num1, num2, num3;

	read_numbers(num1, num2, num3);
	print_sum(number_sum(num1, num2, num3));

	return 0;
}