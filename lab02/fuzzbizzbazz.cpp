#include<iostream>
using namespace std;
int main()
{
	int price;
	cout << "Enter a number:";
	cin >> price;
	if (price % 2 == 0)
		cout << "fuzz";
	if (price % 3 == 0)
		cout << "bizz";
	if (price % 5 == 0)
		cout << "bass";
	if (price % 2 != 0 and price % 3 != 0 and price % 5 != 0)
		cout << price;
	cout << endl;
	return 0;
}