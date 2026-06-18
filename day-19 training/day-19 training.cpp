#include <iostream>

using namespace std;

enum enCountryChoice {Jordan=1, Tunisa=2, Algeria=3, Oman=4, Egypt=5, Iraq=6, Other=7};

int main()
{
	cout << "*****************************\n";
	cout << "Please Chose the number of your country?\n";
	cout << "(1) Jordan\n";
	cout << "(2) Tunisa\n";
	cout << "(3) Algeria\n";
	cout << "(4) Oman\n";
	cout << "(5) Egypt\n";
	cout << "(6) Iraq\n";
	cout << "(7) Other\n";
	cout << "*****************************\n\n";
	cout << "Your chouce? ";

	int c;
	enCountryChoice country;

	cin >> c;
	country = (enCountryChoice)c;

	switch (country) {

	case enCountryChoice::Jordan:
		cout << "Your country is: Jordan";
		break;
	case enCountryChoice::Tunisa:
		cout << "Your country is: Tunisa";
		break;
	case enCountryChoice::Algeria:
		cout << "Your country is: Algeria";
		break;
	case enCountryChoice::Oman:
		cout << "Your country is: Oman";
		break;
	case enCountryChoice::Egypt:
		cout << "Your country is: Egypt";
		break;
	case enCountryChoice::Iraq:
		cout << "Your country is: Iraq";
		break;
	default:
		cout << "Your country is: Other";
		break;
	}

	return 0;
}