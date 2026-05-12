#include <iostream>
using namespace std;

int main()
{
	short int t_loan, payment, t_months;

	cout << "Please enter the total amount of loan you have." << endl;
	cin >> t_loan;

	cout << "Please enter the number of months you have to pay." << endl;
	cin >> t_months;

	payment = t_loan / t_months;

	cout << "The amount you have to pay monthly is: " << payment;

	return 0;

}