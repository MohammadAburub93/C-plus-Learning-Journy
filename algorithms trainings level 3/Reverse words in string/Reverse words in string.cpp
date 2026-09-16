#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string Text;

	cout << "Please enter your string? " << endl; Text;
	getline(cin, Text);

	return Text;
}


vector <string> SplitString(string Text, string Delim)
{
	vector <string> SplitResult;

	short pos = 0;
	string word;

	while ((pos = Text.find(Delim)) != std::string::npos)
	{
		word = Text.substr(0, pos);

		if (word != "")
			SplitResult.push_back(word);

		Text.erase(0, pos + Delim.length());
	}

	if (Text != "")
		SplitResult.push_back(Text);

	return SplitResult;
}

string ReverseWordsInString(string Text)
{
	vector <string> vString;

	string ReveresdString = "";

	vString = SplitString(Text, " ");

	vector <string> ::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;

		ReveresdString += *iter + " ";
	}

	ReveresdString = ReveresdString.substr(0, (ReveresdString.length() - 1));

	return ReveresdString;

}

int main()
{
	
	string Text;

	Text = ReadString();

	cout << "\nString after reversing string: \n";
	cout << ReverseWordsInString(Text) << endl;

	system("pause>0");

	return 0;
}


