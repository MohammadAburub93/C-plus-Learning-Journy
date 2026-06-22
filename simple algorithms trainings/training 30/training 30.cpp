#include <iostream>

using namespace std;

int read_positive_number(string message)
{
	int num;

	do
	{
		cout << message << endl;
		cin >> num;
	} while (num < 0);
	

	return num;
}

int factorial(short num)
{
	int result = 1;

	for (num; num >= 1; num--)
	{
		result = result * num;
	}

	return result;
}

void print_factorial_value(int f_result)
{
	cout << "*****************************\n";
	cout << "The factorial of is: " << f_result << endl;
}


int main()
{
	print_factorial_value(factorial(read_positive_number("Please enter a positive number")));

	return 0;
}