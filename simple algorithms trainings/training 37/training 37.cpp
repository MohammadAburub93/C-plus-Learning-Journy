#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string message)
{
	float number = 0;
	cout << message << endl;
	cin >> number;

	return number;
}

float NumbersSum()
{
	float sum = 0, number = 0;
	int count = 1;

	do
	{
		number = ReadNumber("Please enter the value of number count " + to_string(count));
		if (number == -99)
			break;
		
		sum += number;
		count++;
	} while (number != -99);

	return sum;
}

int main()
{
	float result = 0;

	result = NumbersSum();

	cout <<"\nThe Result is: " <<  result << endl;

	return 0;
}