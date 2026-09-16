#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReplaceWordInString(string Text, string WordToReplace, string NewWord)
{
	short pos = Text.find(WordToReplace);

	while (pos != std::string::npos)
	{
		Text = Text.replace(pos, WordToReplace.length(), NewWord);
		pos = Text.find(WordToReplace);
	}

	return Text;

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