#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	vector<int>v;
	int min, max, min_index = -1, max_index = -1;
	for (int i = 1; i < argc; i++)
	{
		v.push_back(atoi(argv[i]));
	}
	if (v.size() > 1)
	{

		min = *min_element(v.begin(), v.end());
		max = *max_element(v.begin(), v.end());
		cout << "min: " << min << endl;
		cout << "max: " << max << endl;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == min and min_index == -1)
			{
				min_index = i;
			}
			if (v[i] == max and max_index == -1)
			{
				max_index = i;
			}
		}
		sort(v.begin(), v.end());
		min = v.at(1);
		max = v.at(v.size() - 2);
		cout << "min index: " << min_index << endl;
		cout << "max index: " << max_index << endl;
		cout << "second-smallest element: " << min << endl;
		cout << "second-largest element: " << max << endl;

	}
	else
		exit(1);
	return 0;

}