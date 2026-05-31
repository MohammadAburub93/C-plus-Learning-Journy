#include <iostream>
#include <cmath>

using namespace std;

int pow_2(int num)
{
	return floor(pow(num, 2));
}

int pow_3(int num)
{
	return floor(pow(num, 3));
}

int pow_4(int num)
{
	return floor(pow(num, 4));
}

int main()
{

	short int num;

	cout << "Please enter your number N." << endl;
	cin >> num;

	cout << "The N^2 = " << pow_2(num)<< endl;
	cout << "The N^3 = " << pow_3(num) << endl;
	cout << "The N^4 = " << pow_4(num) << endl;

	return 0;
}