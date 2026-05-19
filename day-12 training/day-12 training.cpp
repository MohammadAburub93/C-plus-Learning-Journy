#include <iostream>

using namespace std;


float my_sum_function(float num_1, float num_2)
{
	return num_1 + num_2;

}

int main()
{
	float num_1, num_2, result;

	cout << "Please enter number1?" << endl;
	cin >> num_1;

	cout << "Please enter number2?" << endl;
	cin >> num_2;

	result = my_sum_function(num_1 , num_2);

	cout << result << endl;

	return 0;
}