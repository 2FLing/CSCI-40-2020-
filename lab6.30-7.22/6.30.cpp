#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string CreateAcronym(string);
/* Define your function here */
string CreateAcronym(string userPhrase)
{
	string answer,temp;
	for (auto letter : userPhrase)
	{
		if (isupper(letter))
		{
			temp = letter;
			answer.append(temp);
		}
	}
	return answer;
}
int main() {
	string mystr;
	getline(cin, mystr);
	cout << CreateAcronym(mystr) << endl;

return 0;
}