#include <iostream>
#include <vector>
using namespace std;

void ReadNumbers(vector <int>  &vNUmbers)
{
	int Number = 0;
	char AddMore = 'y';

	do
	{
		cout << "Please enter a number?" << endl;
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "Invalid Number, Enter a valid one please:" << endl;
			cin >> Number;

		}

		vNUmbers.push_back(Number);

		cout << "Do you want to add more numbers? y/n" << endl;
		
		cin >> AddMore;
	} while (AddMore == 'y' || AddMore == 'Y');
}

void PrintNumbers(vector <int> & vNumbers)
{
	cout << "vector Numbers are: ";

	for (int& Number : vNumbers)
	{
		cout << Number << " ";
	}

	cout << endl;
}

int main()
{
	vector <int> vNumbers;

	ReadNumbers(vNumbers);
	PrintNumbers(vNumbers);

	return 0;
}