#include <iostream>
using namespace std;

void PrintWordFromAAAtoZZZ()
{
	cout << "\n";
	string word = "";

	for (int i = 65; i <= 90; i++)
	{

		for (int j = 65; j <= 90; j++)
		{
			for (int m = 65; m <= 90; m++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(m);

				cout << word << endl;

				word = "";
			}
		}
		
	}
}

int main()
{

	PrintWordFromAAAtoZZZ();
	return 0;
}

