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

	cout << "Vector size is: " << vNumbers.size() << endl;

	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();

	cout << "Vector size is: " << vNumbers.size() << endl;

	if (!vNumbers.empty())
		vNumbers.pop_back();

	if (vNumbers.size() > 0)
		vNumbers.pop_back();

	cout << "Numbers vector: \n\n";

	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}
	
	return 0;
}