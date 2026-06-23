#include <iostream>
#include <cmath>

using namespace std;

void read_number_and_power(int &num, int &power)
{

	cout << "Please enter your number N." << endl;
	cin >> num;

	cout << "Please enter the power value m." << endl;
	cin >> power;
}

void power_m_of_number(int num, int m)
{
	int p;

	p = pow(num, m);

	cout << num << " to the power " << m << " = " << p << endl;
}

int main()
{
	int num, power;

	read_number_and_power(num, power);
	power_m_of_number(num, power);

	return 0;
}