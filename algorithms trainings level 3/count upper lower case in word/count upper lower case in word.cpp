#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string Text;

	cout << "Please enter your string? " << endl; Text;
	getline(cin, Text);

	return Text;
}




void CountLettersCaseOfWord(string Text, short &UpperCount, short &LowerCount)
{
	for (short i = 0; i < Text.length(); i++)
	{
		if (isupper(Text[i]))
		{
			UpperCount++;
		}
		else if (islower(Text[i]))
		{
			LowerCount++;
		}
	}
}

int main()
{
	string Text = ReadString();
	short UpperCount = 0, LowerCount = 0;

	CountLettersCaseOfWord(Text, UpperCount, LowerCount);

	cout << "\nString Length = " << Text.length() << endl;
	cout << "\nCapital Letters Count = " << UpperCount << endl;
	cout << "\nSmall Letter Count = " << LowerCount << endl;

	system("pause>0");

	return 0;
}
