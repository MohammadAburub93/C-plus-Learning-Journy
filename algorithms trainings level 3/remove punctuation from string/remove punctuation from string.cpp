#include <iostream>
#include <string>
#include <vector>

using namespace std;

string RemoveOunctuationFromString(string Text)
{
	string StringResult = "";

	for (int i = 0; i < Text.length(); i++)
	{
		if (!ispunct(Text[i]))
		{
			StringResult += Text[i];
		}
	}

	return StringResult;

}

int main()
{

	string Text = "Welcome to Jordan, Jordan is a nice countery; it's amazing";

	cout << "Original String: \n";
	cout << Text << endl;

	cout << "\nPunctuation Removed: \n";
	cout << RemoveOunctuationFromString(Text) << endl;

	system("pause>0");

	return 0;
}