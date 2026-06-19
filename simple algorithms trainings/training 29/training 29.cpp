#include <iostream>

using namespace std;

void read_value(short& num)
{
	cout << "Please enter your number?\n";
	cin >> num;
}

int odd_num_sum(short num)
{
	int result = 0;
	for (short i = 0; i <= num; i = i + 2)
	{
		result = result + i;
	}

	return result;
}

int main()
{
	int sum;
	short num;

	read_value(num);
	sum = odd_num_sum(num);

	cout << "********************************" << endl;
	cout << sum << endl;


	return 0;
}