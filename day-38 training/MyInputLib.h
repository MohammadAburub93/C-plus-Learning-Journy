#pragma once

#include <iostream>
using namespace std;

namespace MyInputLib
{

	int ReadNumber()
	{
		int Number;

		cout << "Please enter your number?\n";

		cin >> Number;

		return Number;
	}

	int ReadNumberInRange(int From, int To)
	{
		int Number;

		do
		{
			cout << "Please enter a number from " << From << " To " << To << endl;
			cin >> Number;
		} while (Number < From || Number > To);
		
		
		return Number;
	}
}