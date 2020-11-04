#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write method to create and output all permutations of the list of names.
void AllPermutations(const vector<string>& permList, const vector<string>& nameList) {
    if (nameList.empty()) {
        for (auto ele : permList) {
            cout << ele << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < nameList.size(); i++) {
        vector<string> perm = permList;
        perm.push_back(nameList[i]);
        vector<string> name = nameList;
        name.erase(name.begin() + i);
        AllPermutations(perm, name);
    }
}

int main(int argc, char* argv[]) {
	vector<string> nameList;
	vector<string> permList;
	string name;

	// TODO: Read in a list of names; stop when -1 is read. Then call recursive method.
	while (cin >> name)
	{
		if (name == "-1")
			break;
		nameList.push_back(name);
	}
    AllPermutations(permList, nameList);

	return 0;
}