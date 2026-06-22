#include <iostream>

using namespace std;

int read_starting_number()
{
	int num;
	cout << "Please put your number?\n";
	cin >> num;

	return num;
}

void print_numbers(int num)
{
	cout << "\n****************************\n";

	for (num; num >= 1; num--)
	{
		cout << num << endl;
	}
}

int main()
{
	print_numbers(read_starting_number());

	return 0;
}