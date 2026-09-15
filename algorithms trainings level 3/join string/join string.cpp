#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector <string> vString, string Delim)
{
	string JoinResult = "";

	for (string& word : vString)
	{
		JoinResult = JoinResult + word + Delim;
	}
	return JoinResult.substr(0, (JoinResult.length() - Delim.length()));
}

int main()
{
	vector <string> vString = {"Mohammad", "Tawfiq", "Mahmoud", "Aburub"};

	cout << "Vector after join: " << endl;
	cout << JoinString(vString, " ");

	system("pause>0");

	return 0;
}