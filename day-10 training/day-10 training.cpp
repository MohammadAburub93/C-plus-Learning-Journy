#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2, str3;
	int result;

	cout << "Please enter string 1 value?" << endl;
	getline(cin, str1);

	cout << endl << "Please enter string 2 value?" << endl;
	cin >> str2;

	cout << endl << "Please enter string 3 value?" << endl;
	cin >> str3;

	cout << "***********************************" << endl;
	cout << "The length of string 1 is: " << str1.length() << endl;
	cout << "Characters at locations 0, 2, 4, 7 are: " << str1[0] << " " << str1[2] << " " << str1[4] << " " << str1[7] << endl;
	cout << "Concatenating string 2 and string 3 = " << str2 + str3 << endl;
	cout << str2 << " * " << str3 << " = " << stoi(str2) * stoi(str3) << endl;


	return 0;
}