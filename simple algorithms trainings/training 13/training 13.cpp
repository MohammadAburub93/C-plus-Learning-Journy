#include <iostream>

using namespace std;

void read_numbers(int& nums_count, int numbers[100])
{
	cout << "Please enter the count of numbers?\n";
	cin >> nums_count;
	
	for (int i = 1; i <= nums_count; i++)
	{
		cout << "Please enter the number value in position " << i << endl;;
		cin >> numbers[i - 1];
	}
}

int max_num(int numbers[100], int nums_count)
{
	int max = 0;
	for (int i = 0; i <= nums_count - 1; i++)
	{
		if (numbers[i] > max)
			max = numbers[i];
		else
			continue;
	}
	
		return max;
}

void print_max_num(int numbers[100], int nums_count)
{
	cout << "The max number is: " << max_num(numbers, nums_count) << endl;
}

int main()
{
	int numbers[100], nums_count;

	read_numbers(nums_count, numbers);
	print_max_num(numbers, nums_count);

	return 0;
}
