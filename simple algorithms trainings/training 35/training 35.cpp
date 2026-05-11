#include <iostream>
using namespace std;

int main()
{

	float Pennies, Nickels, Dimes, Quarters, Dollars, total_pennies, total_dollars;

	cout << "Please enter the number of Penneis you want to give." << endl;
	cin >> Pennies;

	cout << "Please enter the number of Nickels you want to give." << endl;
	cin >> Nickels;

	cout << "Please enter the number of Dimes you want to give." << endl;
	cin >> Dimes;

	cout << "Please enter the number of Quarters you want to give." << endl;
	cin >> Quarters;

	cout << "Please enter the number of Dollars you want to give." << endl;
	cin >> Dollars;

	total_pennies = Pennies + Nickels * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
	total_dollars = total_pennies / 100;

	cout << "You have a total of Pennies equal to: " << total_pennies << endl;
	cout << "You have a total of Dollars equal to: " << total_dollars << endl;



	return 0;
}