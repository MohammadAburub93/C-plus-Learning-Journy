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

void PrintSplitResult(vector <string> vWords)
{
	cout << "\nTokens: " << vWords.size() << endl;

	for (string& word : vWords)
	{
		cout << word << endl;
	}
}

int main()
{
	vector <string> vWords = SplitString(ReadString(), " ");

	PrintSplitResult(vWords);

	system("pause>0");

	return 0;
}
