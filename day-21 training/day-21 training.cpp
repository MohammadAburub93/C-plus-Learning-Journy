#include <iostream>

using namespace std;

int read_number_in_range(int from, int to)
{
	int num;

	do
	{
		cout << "Please enter a number between " << from << " to " << to << " ?" << endl;
		cin >> num;
	} while (num < from || num > to);

	return num;
}

int main()
{
	
	cout << "\nThe number is: " << read_number_in_range(0, 100) << endl;

	return 0;
}