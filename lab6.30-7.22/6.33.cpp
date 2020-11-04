#include <iostream>
#include <vector>
using namespace std;
bool IsVectorEven(vector<int>);
bool IsVectorOdd(vector<int>);
/* Define your function here*/
bool IsVectorEven(vector<int> myVec)
{
	bool all_even = true;
	for (auto num : myVec)
	{
		if (num % 2 != 0)
			all_even = false;
	}
	return all_even;
}
bool IsVectorOdd(vector<int>myVec)
{
	bool all_odd = true;
	for (auto num : myVec)
	{
		if (num % 2 == 0)
			all_odd = false;
	}
	return all_odd;
}
int main() {
	vector<int> nums;
	int size,num;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> num;
		nums.push_back(num);
	}
	if (IsVectorEven(nums))
		cout << "all even" << endl;
	else if (IsVectorOdd(nums))
		cout << "all odd" << endl;
	else
		cout << "not even or odd" << endl;
return 0;
}