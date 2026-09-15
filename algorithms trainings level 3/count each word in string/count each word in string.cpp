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

short CountEachWordOfString(string Text)
{
	short Counter = 0;

	string delim = " ";

	short pos = 0;
	string word;

	while ((pos = Text.find(delim)) != std::string::npos)
	{
		word = Text.substr(0, pos);

		if (word != "")
			Counter++;

		Text.erase(0, pos + delim.length());
	}

	if (Text != "")
		Counter++;

	return Counter;
}

int main()
{
	string Text = ReadString();

	cout << "\nThe number of words in your string is: " << CountEachWordOfString(Text) << endl;

	system("pause>0");

	return 0;
}