#include <iostream>
using namespace std;

int main()
{

	float bill, t_bill;

	cout << "Please enter the value of your bill value before taxes." << endl;
	cin >> bill;

	t_bill = bill + (bill * 0.1) + (bill * 0.16);

	cout << "The total bill after taxes is: " << t_bill << endl;

	return 0;
}