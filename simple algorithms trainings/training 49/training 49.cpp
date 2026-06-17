#include <iostream>

using namespace std;

void read_pin(int &pin)
{
	cout << "Please enter the your pin?" << endl;
	cin >> pin;
}

int main()
{
	int pin;

	read_pin(pin);

	if (pin == 1234)
	{
		cout << "Your balance is: 7500" << endl;
	}
	else
	{
		cout << "Wrong pin" << endl;
	}


	return 0;
}