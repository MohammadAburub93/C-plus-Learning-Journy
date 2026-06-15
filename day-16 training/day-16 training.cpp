#include <iostream>

using namespace std;

void read_array_data(int x[3])
{
	cout << "Please enter number1?\n";
	cin >> x[0];

	cout << "Please enter number2?\n";
	cin >> x[1];

	cout << "Please enter number3?\n";
	cin >> x[2];

}

void print_array_data(int x[3])
{
	cout << "\n***********************************\n";

	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << x[2] << endl;

}


int main()
{
	int x[3];

	read_array_data(x);
	print_array_data(x);

	return 0;
}