#include <iostream>
using namespace std;

struct stPiggyBankContent
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent read_piggybank_content()
{
	stPiggyBankContent PiggyBankContent;

	cout << "Please enter the number of Penneis you want to give." << endl;
	cin >> PiggyBankContent.Pennies;

	cout << "Please enter the number of Nickels you want to give." << endl;
	cin >> PiggyBankContent.Nickels;

	cout << "Please enter the number of Dimes you want to give." << endl;
	cin >> PiggyBankContent.Dimes;

	cout << "Please enter the number of Quarters you want to give." << endl;
	cin >> PiggyBankContent.Quarters;

	cout << "Please enter the number of Dollars you want to give." << endl;
	cin >> PiggyBankContent.Dollars;

	return PiggyBankContent;
}

int calculate_total_pennies(stPiggyBankContent PiggyBankContent)
{
	int PenniesTotal = 0;

	PenniesTotal = PiggyBankContent.Pennies + PiggyBankContent.Nickels * 5 +
		PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;

	return PenniesTotal;
}

int main()
{
	int TotalPennies = calculate_total_pennies(read_piggybank_content());
	 
	cout << "You have a total of Pennies equal to: " << TotalPennies << endl;
	cout << "You have a total of Dollars equal to: " << (float)TotalPennies / 100 << endl;



	return 0;
}