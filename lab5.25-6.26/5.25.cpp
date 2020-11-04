#include <iostream>
#include<stdlib.h>
#include <vector>
#include<algorithm>
using namespace std;

int main() {

	vector<int>v;
	char nums[256],temp;
	while (cin>>nums)
	{
		v.push_back(atoi(nums));
		temp = getchar();
		if (temp == '\n')
			break;
	}
	sort(v.begin(), v.end());
	cout << v.at(0) << " " << v.at(1) << endl;
	return 0;
}