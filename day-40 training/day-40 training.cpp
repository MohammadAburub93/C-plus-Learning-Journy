#include <iostream>
using namespace std;

//Function decleration
void add(int, int);


int main()
{
	add(1, 5);

	return 0;
}


//Function definition
void add(int a, int b)
{
	cout << a + b << endl;
}