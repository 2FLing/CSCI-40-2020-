#include <iostream>              // For setprecision
using namespace std;
void SwapValues(int&userVal1,int& userVal2);

void SwapValues(int& userVal1, int& userVal2)
{
	int temp;
	temp = userVal1;
	userVal1 = userVal2;
	userVal2 = temp;
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	SwapValues(num1, num2);
	cout << num1 << " " << num2 << endl;
	return 0;
}