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
	int count = 1;

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
			count++;
		}

	} while (Pin != "1234" && count <=3);

	return 0;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nYour account balance is: " << 7500 << endl;
	}
	else
	{
		cout << "\nSorry, you are out of trials, the card is blocked\n";
	}

	return 0;
}