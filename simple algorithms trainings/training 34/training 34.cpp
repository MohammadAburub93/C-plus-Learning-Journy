#include <iostream>

using namespace std;

void read_sales_val(float& total_sales)
{
	cout << "Please enter your total sales value?" << endl;
	cin >> total_sales;
}

float commission_calc(float total_sales)
{
	float result;

	if ( total_sales > 1000000)
	{
		result = total_sales * 0.01;
	}
	else if (total_sales > 500000 and total_sales <= 1000000)
	{
		result = total_sales * 0.02;
	}
	else if (total_sales > 100000 and total_sales <= 500000)
	{
		result = total_sales * 0.03;
	}
	else if (total_sales > 50000 and total_sales <= 100000)
	{
		result = total_sales * 0.05;
	}
	else
	{
		result = total_sales * 0;
	}

	return result;
}

int main()
{
	float total_sales, comm_val;

	read_sales_val(total_sales);
	comm_val = commission_calc(total_sales);

	cout << "Your commission is: " << comm_val << endl;

	return 0;
}