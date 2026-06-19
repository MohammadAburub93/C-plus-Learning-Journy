#include <iostream>

using namespace std;

void read_array_data(int arr1[100], int& length)
{
	cout << "How many numbers do you want to enter? 1 to 100?" << endl;
	cin >> length;
	
	for (int i = 1; i <= length; i++)
	{
		cout << "Please enter Number " << i << endl;
		cin >> arr1[i-1];
	}

}

void print_array_data(int arr1[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "\nNumber [" << i + 1 << "] : " << arr1[i] << endl;
	}
}

int calculate_array_sum(int arr1[100], int length)
{
	int result = 0;

	for (int i = length; i > 0; i--)
	{
		result = result + arr1[i - 1];
	}

	return result;
}

float calculate_array_average(int arr1[100], int length)
{
	return (float)calculate_array_sum(arr1, length)/length;

}

int main()
{
	int arr1[100], length = 0;

	read_array_data(arr1, length);
	print_array_data(arr1, length);

	cout << "\n***********************\n";
	cout << "Sum = " << calculate_array_sum(arr1, length) << endl;
	cout << "Average = " << calculate_array_average(arr1, length) << endl;

	return 0;
}