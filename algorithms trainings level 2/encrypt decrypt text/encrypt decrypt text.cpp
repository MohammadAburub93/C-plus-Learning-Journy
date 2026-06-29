#include <iostream>
using namespace std;

string ReadTextToEncryotOrDecrypt(string message)
{
	string Text = "";

	cout << message << endl;
	cin >> Text;

	return Text;
}

string TextEncrypt(string Text, short Ecryptionkey)
{

	for (int i = 0; i <= Text.length(); i++)
		Text[i] = char(int(Text[i]) + Ecryptionkey);

	return Text;
}

string TextDecrypt(string Text, short Ecryptionkey)
{

	for (int i = 0; i <= Text.length(); i++)
		Text[i] = char(int(Text[i]) - Ecryptionkey);

	return Text;
}

int main()
{
	const short EncryptionKey = 2;

	string Text = ReadTextToEncryotOrDecrypt("Please eneter text to encrypt.");
	string EncryptedText = TextEncrypt(Text, EncryptionKey);
	string DecryptedText = TextDecrypt(EncryptedText, EncryptionKey);

	cout << "Text before encryption: " << Text << endl;
	cout << "Text after encryption : " << EncryptedText << endl;
	cout << "Text after decryption : " << DecryptedText << endl;

	return 0;
}