#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 10, 20, 44, 55, 33, 22, 99, 88, 99, 100 };
	int search_value = 44;

	for (int i = 0; i < 10; i++)
	{
		cout << "We are now at position " << i << endl;
		if (arr[i] == search_value)
		{
			cout << "The value of " << search_value << " is found at position " << i << endl;
			break;
		}

	}

	return 0;
}