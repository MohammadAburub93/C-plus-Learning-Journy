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
}