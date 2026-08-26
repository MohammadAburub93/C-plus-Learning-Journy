#include <iostream>
using namespace std;

int main()
{
	int arr[4] = { 10, 20, 30, 40 };
	int* ptr;
	ptr = arr;

	cout << "Addresses are: \n";

	cout << ptr << endl;
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << ptr + 3 << endl;

	cout << "\nValues are: \n";

	cout << *(ptr) << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	cout << *(ptr + 3) << endl;

	return 0;
}