#include <iostream>

using namespace std;

string ReadPinCode()
{
	string PinCode;

	cout << "Please enter th PIN" << endl;
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string Pin;

	do
	{
		Pin = ReadPinCode();

		if (Pin == "1234")
		{
			return 1;
		}
		else
		{
			cout << "\nWrong Pin\n";
			system("color 4F");
		}

	} while (Pin != "1234");

	return 0;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nYour account balance is: " << 7500 << endl;
	}

	return 0;
}