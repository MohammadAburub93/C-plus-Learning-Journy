#include <iostream>

using namespace std;

enum enScreenColor { red = 1, blue = 2, green = 3, yellow = 4 };

int main()
{
	cout << "*****************************\n";
	cout << "Please Chose the number of your color?\n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Green\n";
	cout << "(4) Yellow\n";
	cout << "*****************************\n\n";
	cout << "Your chouce? ";

	int c;
	enScreenColor color;

	cin >> c;
	color = (enScreenColor)c;

	if (color == enScreenColor::red)
	{
		system("color 4F");
	}
	else if (color == enScreenColor::blue)
	{
		system("color 1F");
	}
	else if (color == enScreenColor::green)
	{
		system("color 2F");
	}
	else if (color == enScreenColor::yellow)
	{
		system("color 6F");
	}
	else
	{
		system("color 6F");
	}

	return 0;
}