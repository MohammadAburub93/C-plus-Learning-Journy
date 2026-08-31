#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S1 = "My name is Mohammad Aburub, Ilearn programming";

	cout << S1.length() << endl;

	cout << S1.at(3) << endl;

	S1.append(" @ProgrammingAdvices");
	cout << S1 << endl;

	S1.insert(7, " Tawfiq ");
	cout << S1 << endl;

	cout << S1.substr(19, 8) << endl;

	S1.push_back('X');
	cout << S1 << endl;

	S1.pop_back();
	cout << S1 << endl;

	cout << S1.find("Tawfiq") << endl;

	cout << S1.find("tawfiq") << endl;

	if (S1.find("tawfiq") == S1.npos)
	{
		cout << "tawfiq is not found";
	}

	S1.clear();

	cout << S1 << endl;
	return 0;
}