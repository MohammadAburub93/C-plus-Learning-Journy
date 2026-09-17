#include <iostream>
#include <string>
#include <vector>

using namespace std;

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
string LowerCaseWord(string Text)
{
	for (short i = 0; i < Text.length(); i++)
	{
		Text[i] = tolower(Text[i]);
	}

	return Text;
}

string JoinString(vector <string> vString, string Delim)
{
	string JoinResult = "";

	for (string& word : vString)
	{
		JoinResult = JoinResult + word + Delim;
	}
	return JoinResult.substr(0, (JoinResult.length() - Delim.length()));
}

string ReplaceWordInStringUsingSplit(string Text, string WordToReplace, string NewWord, bool MatchCase = false)
{
	vector <string> vString = SplitString(Text, " ");

	for (string& word : vString)
	{
		if (MatchCase)
		{
			if (word == WordToReplace)
				word = NewWord;
		}
		else
		{
			if (LowerCaseWord(word) == LowerCaseWord(WordToReplace))
				word = NewWord;
		}
	}

	return JoinString(vString, " ");

}

int main()
{

	string Text = "Welcome to Jordan , Jordan is a nice countery";

	cout << "Original String: \n";
	cout << Text << endl;

	cout << "\nReplace with match case: \n";
	cout << ReplaceWordInStringUsingSplit(Text, "jordan", "USA", true) << endl;

	cout << "\nReplace without match case: \n";
	cout << ReplaceWordInStringUsingSplit(Text, "jordan", "USA") << endl;

	system("pause>0");

	return 0;
}
