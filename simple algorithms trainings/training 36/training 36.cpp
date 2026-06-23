#include <iostream>

using namespace std;


enum enOperators {plus = '+', minus = '-', multiply = '*', devide = '/' };

float ReadNumber(string message)
{
	float number = 0;

	cout << message << endl;
	cin >> number;

	return number;
}

enOperators ReadOperationType()
{
	char OT = '+';

	cout << "Please enter the operation sign between (+, -, *, /)" << endl;
	cin >> OT;

	return (enOperators)OT;
}

float CalculatorResult(float number1, float number2, enOperators OpType)
{
	switch (OpType)
	{
	case enOperators::plus:
		return number1 + number2;
	case enOperators::minus:
		return number1 - number2;
	case enOperators::multiply:
		return number1 * number2;
	case enOperators::devide:
		return number1 / number2;
	}
}

int main()
{
	float number1 = ReadNumber("Please enter the first number?");
	float number2 = ReadNumber("Please enter the second number?");

	enOperators OpType = ReadOperationType();

	
	cout << "\nThe result is: " << CalculatorResult(number1, number2, OpType) << endl;

	return 0;
}