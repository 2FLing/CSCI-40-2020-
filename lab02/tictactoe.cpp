#include<iostream>
using namespace std;
int main()
{
	char b11, b12, b13, b21, b22, b23, b31, b32, b33;
	char winner = '?';
	cout << "Enter the board (left to right, top to bottom): ";
	cin >> b11 >> b12 >> b13 >> b21 >> b22 >> b23 >> b31 >> b32 >> b33;
	if (b11 == b12 and b12 == b13)
		winner = b11;
	else if (b21 == b22 and b22 == b23)
		winner = b21;
	else if (b31 == b32 and b32 == b33)
		winner = b31;
	else if (b11 == b22 and b22 == b33)
		winner = b11;
	else if (b13 == b22 and b22 == b31)
		winner = b13;
	else if (b11 == b21 and b21 == b31)
		winner = b11;
	else if (b12 == b22 and b22 == b32)
		winner = b12;
	else if (b13 == b23 and b23 == b33)
		winner = b13;

	if (winner != '?')
		cout << winner << " wins!" << endl;
	else
		cout << "It's a tie!" << endl;
	return 0;
}