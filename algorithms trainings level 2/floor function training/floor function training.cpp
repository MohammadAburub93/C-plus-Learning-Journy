#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
	float Number;

	cout << "Please enter a number" << endl;
	cin >> Number;

	return Number;
}

float MyFloor(float Number)
{	
	if (Number > 0)
		return int(Number);
	else
		return int(Number) - 1;
}

int main()
{
	float Number = ReadNumber();

	cout << "My floor result : " << MyFloor(Number) << endl;

	cout << "C++ floor result : " << floor(Number) << endl;

	return 0;
}
