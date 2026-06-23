#include <iostream>
#include <cmath>

using namespace std;

int read_number()
{
	int num;

	cout << "Please enter your number N." << endl;
	cin >> num;

	return num;
}

void power_of_2_3_4_of_number(int num)
{
	int p2, p3, p4;
	
	p2 = pow(num, 2);
	p3 = pow(num, 3);
	p4 = pow(num, 4);

	cout << "The " << num << "^2 = " << p2<< endl;
	cout << "The " << num << "^3 = " << p3 << endl;
	cout << "The " << num << "^4 = " << p4 << endl;
}

int main()
{
	power_of_2_3_4_of_number(read_number());

	return 0;
}