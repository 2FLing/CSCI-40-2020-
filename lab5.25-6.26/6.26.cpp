#include <iostream>
#include <string>           // For setprecision
using namespace std;
int CountCharacters(char userChar, string userString);

int CountCharacters(char userChar, string userString)
{
	int counter = 0;
	for (auto word : userString)
	{
		if (word == userChar)
			counter++;
	}
	return counter;
}

int main()
{
	string str;
	char word;
	cin >> word;
	getline(cin, str);
	cout << CountCharacters(word, str) << endl;
	return 0;
}