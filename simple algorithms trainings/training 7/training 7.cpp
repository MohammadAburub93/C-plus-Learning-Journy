#include <iostream>
using namespace std;

int read_number()
{
	int num;

	cout << "Please enter the value of the number A as Integer?" << endl;
	cin >> num;

	return num;	
}

float half_calc(int num)
{
	return (float)num / 2;
}

void print_half_val(int num)
{
	cout << "The half of that number is " << half_calc(num) << endl;
}
int main()
{
	print_half_val(read_number());

	return 0;
}