#include <iostream>
using namespace std;

string Read3LettersPassword(string message)
{
	string Password = "";
	
	cout << message << endl;
	cin >> Password;

	return Password;
}

bool Guess3LettersPassword(string password)
{
	cout << "\n";
	string word = "";
	int count = 0;

		for (int i = 65; i <= 90; i++)
		{

			for (int j = 65; j <= 90; j++)
			{
				for (int m = 65; m <= 90; m++)
				{
					count++;

					word = word + char(i);
					word = word + char(j);
					word = word + char(m);

					cout << "Trial [" << count << "] : " << word << endl;

					if (word == password)
					{
						cout << "Password is " << word << endl;
						cout << "Found after " << count << " Trial(s)";
						return true;
					}
					else
						word = "";

				}
			}

		}
	
}

int main()
{

	Guess3LettersPassword(Read3LettersPassword("Please enter your guess of 3 letters password all in uppercase."));
	return 0;
}