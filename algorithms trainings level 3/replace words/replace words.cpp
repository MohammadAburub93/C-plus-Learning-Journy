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

string ReplaceWordInString(string Text, string WordToReplace, string NewWord)
{
	vector <string> vString;

	string NewString = "";

	vString = SplitString(Text, " ");

	vector <string> ::iterator iter = vString.begin();

	while (iter != vString.end())
	{
		if (*iter == WordToReplace)
		{
			NewString += NewWord + " ";
		}
		else
		{
			NewString += *iter + " ";
		}

		++iter;
	}

	NewString = NewString.substr(0, (NewString.length() - 1));

	return NewString;

}

int main()
{

	string Text = "Welcome to Jordan , Jordan is a nice countery";

	cout << "\nOriginal String: \n";
	cout << Text << endl;

	cout << "\nString after replace: \n";
	cout << ReplaceWordInString(Text, "Jordan", "USA") << endl;

	system("pause>0");

	return 0;
}