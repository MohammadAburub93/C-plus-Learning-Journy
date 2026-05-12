#include <iostream>
using namespace std;

int main()
{
	short int t_loan, payment, t_months;

	cout << "Please enter the total amount of loan you have." << endl;
	cin >> t_loan;

	cout << "Please enter the monthly payment you pay." << endl;
	cin >> payment;

	t_months = t_loan / payment;

	cout << "The total number of months you have to pay is: " << t_months << " Months.";

	return 0;
}