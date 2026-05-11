#include <iostream>
using namespace std;

int main()
{

	float t_bill, cash, t_change;

	cout << "Please enter the value of your total bill." << endl;
	cin >> t_bill;

	cout << "Please enter the value of cash paid." << endl;
	cin >> cash;

	t_change = cash - t_bill;

	cout << "You will get a change equal to: " << t_change << endl;

	return 0;
}