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

void using_while(int num)
{
	int count = 1;

	do
	{
		cout << count << endl;
		count++;
	} while (count <= num);
}

int main()
{
	print_numbers(read_target_number());
	using_while(read_target_number());

	return 0;
}