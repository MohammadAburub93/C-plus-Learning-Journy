#include <iostream>

using namespace std;

int read_target_number()
{
	int num;

	cout << "Please put your number?\n";
	cin >> num;

	return num;
}

void print_numbers(int num)
{
	cout << "\n****************************\n";

	for (short i = 1; i <= num; i++)
	{
		cout << i << endl;
	}
}

int main()
{
	print_numbers(read_target_number());
	return 0;
}