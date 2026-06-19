#include <iostream>

using namespace std;

void read_value(short& num)
{
	cout << "Please put your number?\n";
	cin >> num;
}

void print_numbers(short num)
{
	cout << "\n****************************\n";

	for (short i = 1; i <= num; i++)
	{
		cout << i << endl;
	}
}

int main()
{
	short num;

	read_value(num);
	print_numbers(num);

	return 0;
}