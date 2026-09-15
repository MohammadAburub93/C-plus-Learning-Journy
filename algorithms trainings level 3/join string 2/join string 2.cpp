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

string JoinString(string arr[], short ArrayLength, string Delim)
{
	string JoinResult = "";

	for (short i = 0; i < ArrayLength; i++)
	{
		JoinResult = JoinResult + arr[i] + Delim;
	}
	return JoinResult.substr(0, (JoinResult.length() - Delim.length()));
}

int main()
{
	vector <string> vString = { "Mohammad", "Tawfiq", "Mahmoud", "Aburub" };

	string arr[] = { "Mohammad", "Tawfiq", "Mahmoud", "Aburub" };

	cout << "Vector after join: " << endl;
	cout << JoinString(vString, " ");

	cout << "\n\nArray after join: " << endl;
	cout << JoinString(arr, 4, " ");

	system("pause>0");

	return 0;
}
