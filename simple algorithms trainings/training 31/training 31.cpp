#include <iostream>
using namespace std;

int main()
{

	short int num;

	cout << "Please enter your number N." << endl;
	cin >> num;

	cout << "The N^2 = " << num * num << endl;
	cout << "The N^3 = " << num * num * num << endl;
	cout << "The N^4 = " << num * num * num * num << endl;

	return 0;
}