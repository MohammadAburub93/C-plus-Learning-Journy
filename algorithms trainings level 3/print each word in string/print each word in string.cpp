#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string Text;

	cout << "Please enter your string? " << endl; Text;
	getline(cin, Text);

	return Text;
}

void PrintEachWordOfString(string Text)
{
	string delim = " ";

	cout << "\nYour string words are: \n";

	short pos = 0;
	string word;

	while ((pos = Text.find(delim)) != std::string::npos)
	{
		word = Text.substr(0, pos);

		if (word != "")
			cout << word << endl;

		Text.erase(0, pos + delim.length());
	}

	if (Text != "")
		cout << Text << "\n";
}

int main()
{

	PrintEachWordOfString(ReadString());


	system("pause>0");

	return 0;
}
