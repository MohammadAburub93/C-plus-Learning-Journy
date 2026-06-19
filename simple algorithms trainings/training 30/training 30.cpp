#include <iostream>

using namespace std;

void read_number(short &num)
{
	cout << "Please enter the number?" << endl;
	cin >> num;
}

int calc_factorial(short num)
{
	int result = 1;

	for (num; num >= 1; num--)
	{
		result = result * num;
	}

	return result;
}

int main()
{
	short num;
	int f_result;

	read_number(num);
	f_result = calc_factorial(num);

	cout << "*****************************\n";
	cout << "The factorial of " << num << " is: " << f_result << endl;


	return 0;
}