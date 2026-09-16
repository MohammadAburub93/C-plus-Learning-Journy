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

string JoinString(vector <string> vString, string Delim, bool InReverse = false)
{
	string JoinResult = "";

	if (InReverse)
	{
		for (short i = vString.size() - 1; i >= 0; i--)
		{
			JoinResult = JoinResult + vString[i] + Delim;
		}
		return JoinResult.substr(0, (JoinResult.length() - Delim.length()));
	}
	else
	{
		for (string& word : vString)
		{
			JoinResult = JoinResult + word + Delim;
		}
		return JoinResult.substr(0, (JoinResult.length() - Delim.length()));
	}

}

int main()
{
	vector <string> vString;
	string ReveresedString = "";

	vString = SplitString(ReadString(), " ");
	
	ReveresedString = JoinString(vString, " ", true);

	cout << "\nString after reversing string: \n";
	cout << ReveresedString << endl;

	system("pause>0");

	return 0;
}


