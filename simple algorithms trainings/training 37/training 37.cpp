#include <iostream>

using namespace std;

void read_value(short& num)
{
	cout << "Please enter your number?" << endl;
	cin >> num;
}

int sum_calc(short num)
{
	int result = 0;

	for (num; num != -99; read_value(num))
	{
		result = result + num;
	}

	return result;
}

int main()
{
	short num;
	int sum;

	read_value(num);
	sum = sum_calc(num);

	cout << "\n**************************\n";
	cout << sum << endl;

	return 0;
}