#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct stClientData {

	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance = 0;
};

vector <string> SplitString(string Text, string Delim)
{
	vector <string> SplitResult;

	short pos = 0;
	string word;

	while ((pos = Text.find(Delim)) != std::string::npos)
	{
		word = Text.substr(0, pos);

		if (word != "")
			SplitResult.push_back(word);

		Text.erase(0, pos + Delim.length());
	}

	if (Text != "")
		SplitResult.push_back(Text);

	return SplitResult;
}

stClientData ConvertLineToRecord(string DataLine, string Seperator = "#//#")
{
	stClientData ClientRecord;

	vector <string> Data = SplitString(DataLine, Seperator);
	
	ClientRecord.AccountNumber = Data[0];
	ClientRecord.PinCode = Data[1];
	ClientRecord.Name = Data[2];
	ClientRecord.Phone = Data[3];
	ClientRecord.AccountBalance = stod(Data[4]);

	return ClientRecord;
}

void PrintClientRecord(stClientData ClientRecord)
{
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "Account Number : " << ClientRecord.AccountNumber << endl;
	cout << "Pin Code       : " << ClientRecord.PinCode << endl;
	cout << "Name           : " << ClientRecord.Name << endl;
	cout << "Phone          : " << ClientRecord.Phone << endl;
	cout << "Account Balance: " << ClientRecord.AccountBalance << endl;
}

int main()
{
	string ClientDataLine = "A150#//#1234#//#Mohammad Aburub#//#123456789#//#5270.000000#//#";
	stClientData ClientRecord = ConvertLineToRecord(ClientDataLine);

	cout << "Line Record is: \n";
	cout << ClientDataLine;

	PrintClientRecord(ClientRecord);

	system("pause>0");

	return 0;
}
