#include <iostream>

using namespace std;

void read_info(float &num1, float &num2, char &opr)
{
	cout << "Please enter the first number?" << endl;
	cin >> num1;

	cout << "Please enter the second number?" << endl;
	cin >> num2;

	cout << "Please enter the operator? choose between + - * /" << endl;
	cin >> opr;
}

float calc_result(float num1, float num2, char opr)
{
	float result;

	switch (opr) {

	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		cout << "Not valid operand";
	}

	return result;
}

int main()
{
	float num1, num2;
	char opr;

	read_info(num1, num2, opr);
	
	cout << "The result is: " << calc_result(num1, num2, opr) << endl;


	return 0;
}