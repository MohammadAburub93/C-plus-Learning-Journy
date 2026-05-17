#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	cout << "The length of my string is: " << my_string.length() << endl;

	cout << my_string[1] << endl;

	string s1 = "10", s2 = "20";

	string s3 = s1 + s2;

	cout << s3 << endl;

	int sum = stoi(s1) + stoi(s2);

	cout << sum << endl;

	
	return 0;
}