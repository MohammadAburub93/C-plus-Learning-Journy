#include <iostream>

using namespace std;

int read_sales_val()
{
	int total_sales;

	cout << "Please enter your total sales value?" << endl;
	cin >> total_sales;

	return total_sales;
}

float get_commission_value(float total_sales)
{

	if ( total_sales > 1000000)
		return 0.01;
	else if (total_sales <= 1000000)
		return 0.02;
	else if (total_sales <= 500000)
		return 0.03;
	else if (total_sales <= 100000)
		return 0.05;
	else
		return 0;

}

float commission_calculator(int total_sales)
{
	return get_commission_value(total_sales) * total_sales;
}

int main()
{
	int total_sales;

	total_sales = read_sales_val();

	cout << "Your commission percentage is: " << get_commission_value(total_sales) << endl;;
	cout << "Your commission is: " << commission_calculator(total_sales) << endl;

	return 0;
}