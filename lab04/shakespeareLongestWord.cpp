#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, longest_str;
	int size = 0;
	while (cin >> str1)
	{
		if (str1.size() > size)
		{
			size = str1.size();
			longest_str = str1;
		}
	}
	cout << "The longest word is: " << longest_str << endl;
	return 0;
}
