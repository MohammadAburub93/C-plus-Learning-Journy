#include <iostream>
#include <string>
#include <cctype>

using namespace std;

enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };

string ReadString()
{
	string Text;

	cout << "Please enter your string? " << endl; Text;
	getline(cin, Text);

	return Text;
}

short CountLetters(string Text, enWhatToCount WhatToCount = enWhatToCount::All)
{
	if (WhatToCount == enWhatToCount::All)
	{
		return Text.length();
	}

	short Counter = 0;

	for (short i = 0; i < Text.length(); i++)
	{
		if (WhatToCount == enWhatToCount::CapitalLetters && isupper(Text[i]))
		{
			Counter++;
		}

		if (WhatToCount == enWhatToCount::SmallLetters && islower(Text[i]))
		{
			Counter++;
		}
	}

	return Counter;
	
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

	cout << "\nString Length = " << CountLetters(Text) << endl;
	cout << "\nCapital Letters Count = " << CountLetters(Text, enWhatToCount::CapitalLetters) << endl;
	cout << "\nSmall Letter Count = " << CountLetters(Text, enWhatToCount::SmallLetters) << endl;

	system("pause>0");

	return 0;
}
