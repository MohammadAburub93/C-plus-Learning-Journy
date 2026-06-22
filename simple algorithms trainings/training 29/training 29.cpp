#include <iostream>

using namespace std;

enum enOddorEven { odd = 1, even = 2 };

int read_target_num()
{
	int num;
	cout << "Please enter your number?\n";
	cin >> num;

	return num;
}

enOddorEven check_odd_or_even(int num)
{
	if (num % 2 != 0)
		return enOddorEven::odd;
	else
		return enOddorEven::even;
}

int even_num_sum(short num)
{
	int result = 0;
	for (short counter = 1; counter <= num; counter++)
	{
		if (check_odd_or_even(counter) == enOddorEven::even)
			result += counter;
		else
			continue;
	}

	return result;
}

void print_even_sum(int sum)
{
	cout << "********************************" << endl;
	cout << sum << endl;
}

int main()
{
	print_even_sum(even_num_sum(read_target_num()));

	return 0;
}