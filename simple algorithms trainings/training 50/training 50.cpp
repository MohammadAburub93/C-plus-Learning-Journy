#include <iostream>

using namespace std;

bool trial_valid(short &count)
{

	while (count < 3)
	{
		count++;
		return true;
	}

	return false;
	
}

void read_pin(short& pin)
{
	cout << "Please enter yor pin?\n";
	cin >> pin;
}

bool check_pin(short& pin, short count)
{
	if (pin == 1234)
	{
		return true;
	}
	else
	{
		if (trial_valid(count))
		{
			cout << "It's a wrong pin, Please try again?" << endl;
			cin >> pin;
			check_pin(pin, count);
		}
		else
		{
			return false;
		}
	}
}

void print_screen_result(short pin, short count)
{
	if (check_pin(pin, count))
	{
		cout << "Your Balance is: 7500" << endl;
	}
	else
	{
		cout << "Sorry, you are out of trials, the card is blocked" << endl;
	}
}

int main()
{
	short count = 1;
	short pin;

	read_pin(pin);
	print_screen_result(pin, count);

	return 0;
}