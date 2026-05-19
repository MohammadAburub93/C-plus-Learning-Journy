#include <iostream>

using namespace std;

void my_sum_procedure()
{
	float num_1, num_2;

	cout << "Please enter number 1?" << endl;
	cin >> num_1;

	cout << "Please enter number 2?" << endl;
	cin >> num_2;

	cout << "***************************" << endl;
	cout << num_1 + num_2 << endl << endl;
}

float my_sum_function()
{
	float num_1, num_2;

	cout << "Please enter number 1?" << endl;
	cin >> num_1;

	cout << "Please enter number 2?" << endl;
	cin >> num_2;

	return num_1 + num_2;

}

int main()
{
	float result;

	my_sum_procedure();

	result = my_sum_function();

	cout << "***************************" << endl << result << endl;

	return 0;
}