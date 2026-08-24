#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	for (int i = vNumbers.size(); i > 0; i--)
	{
		vNumbers.pop_back();
	}


	cout << "Numbers vector: \n\n";

	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}
	
	return 0;
}