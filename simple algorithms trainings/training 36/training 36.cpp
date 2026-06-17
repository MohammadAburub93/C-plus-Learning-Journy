#include <iostream>

using namespace std;

void read_info(float &num1, float &num2, string &opr)
{
	cout << "Please enter the first number?" << endl;
	cin >> num1;

	cout << "Please enter the second number?" << endl;
	cin >> num2;

	cout << "Please enter the operator? choose between + - * /" << endl;
	cin >> opr;
}

float calc_result(float num1, float num2, string opr)
{
	float result;

	if (opr == "+")
	{
		result = num1 + num2;
	}
	else if (opr == "-")
	{
		result = num1 - num2;
	}
	else if (opr == "*")
	{
		result = num1 * num2;
	}
	else if (opr == "/")
	{
		result = num1 / num2;
	}

	return result;
}

int main()
{
	float num1, num2;
	string opr;

	read_info(num1, num2, opr);
	
	cout << "The result is: " << calc_result(num1, num2, opr) << endl;


	return 0;
}