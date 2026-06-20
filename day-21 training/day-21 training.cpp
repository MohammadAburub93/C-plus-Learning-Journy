#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int num;
	
	for (int i = 1; i <= 5; i++)
	{
		cout << "Please enter thr number?\n";
		cin >> num;

		if (num >= 50)
		{
			continue;
		}
		sum += num;
	}

	cout << "The total sum is: " << sum << endl;

	return 0;
}