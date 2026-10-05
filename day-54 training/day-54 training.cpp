#include <iostream>

using namespace std;

class clsCalculator
{
private:
	//enum enOperation {Add = 1, Sub = 2, Mul = 3, Div = 4, Clear = 5};

	float _Result = 0;
	float _CurrentNumber = 0;
	string _CurrentOperation;
	float _LastResult = 0;

	bool _IsZero(float Number)
	{
		return (Number == 0);
	}

public:

	int GetFinalResult()
	{
		return _Result;
	}

	void Add(float Number)
	{
		_CurrentNumber = Number;
		_CurrentOperation = "Adding";
		_LastResult = _Result;
		_Result += Number;
	}

	void Subtract(float Number)
	{
		_CurrentNumber = Number;
		_CurrentOperation = "Subtracting";
		_LastResult = _Result;
		_Result -= Number;
	}

	void Multiply(float Number)
	{
		_CurrentNumber = Number;
		_CurrentOperation = "Multiplying";
		_LastResult = _Result;
		_Result *= Number;
	}

	void Devide(float Number)
	{
		_CurrentNumber = Number;

		if (_IsZero(Number))
		{
			Number = 1;
		}
			
			_CurrentOperation = "Deviding";
			_LastResult = _Result;
			_Result = _Result / Number;
	}

	void Clear()
	{
		_Result = 0;
		_CurrentNumber = 0;
		_CurrentOperation = "Clear";
		_LastResult = 0;
	}

	void CancleLastOperation()
	{
		_CurrentNumber = 0;
		_CurrentOperation = "Cancelling last operation";
		_Result = _LastResult;
	}

	void PrintResult()
	{
		cout << "Result after " << _CurrentOperation << " " << _CurrentNumber << " is: ";
		cout << GetFinalResult() << endl;
	}

};

int main()
{
	clsCalculator Calculator1;

	Calculator1.Clear();

	Calculator1.Add(10);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.Devide(0);
	Calculator1.PrintResult();

	Calculator1.Devide(2);
	Calculator1.PrintResult();

	Calculator1.CancleLastOperation();
	Calculator1.PrintResult();

	Calculator1.Multiply(3);
	Calculator1.PrintResult();

	Calculator1.Clear();
	Calculator1.PrintResult();


	system("pause>0");

	return 0;	
}

