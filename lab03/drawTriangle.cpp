#include<iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter size: ";
	cin >> size;
	cout << endl;
	if (size < 0)
	{
		cout << "Invalid size." << endl;
		exit(1);
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < (size - 1 - i); j++)
				cout << " ";
			for (int k = 0; k <= i; k++)
				cout << "*";
			cout << endl;
		}

	}
	return 0;
}