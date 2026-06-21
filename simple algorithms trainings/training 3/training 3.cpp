#include <iostream>

using namespace std;

enum enNumberType {odd = 1, even = 2};

int read_number()
{
	int num;

	cout << "Please enter the number?" << endl;
	cin >> num;

	return num;
}

enNumberType odd_even_checker(int num)
{
	int result = num % 2;
	if (result == 0)
		return enNumberType::even;
	else
		return enNumberType::odd;
}

void print_result(enNumberType type)
{
	if (type == enNumberType::even)
		cout << "It's an even number\n";
	else
		cout << "It's an odd number\n";
}

int main()
{
	print_result(odd_even_checker(read_number()));

	return 0;
}