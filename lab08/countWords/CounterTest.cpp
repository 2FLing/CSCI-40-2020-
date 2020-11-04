#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
using namespace std;

// You'll want to make a function that will convert a string to lowercase
// and remove any non-alphabetic characters that exist around it!
// For example, "the.", "!the", "THE", and "0tHE" should all count as "the"
void fixString(string& s) {
    // FIXME: implement this function to transform s into a "cleaned-up" version of itself
    // lowercase it
    string new_s, temp;
    string::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        if (isalpha(*it))
        {
            *it = tolower(*it);
            temp = *it;
            new_s.append(temp);
        }
    }
    s = new_s;
}

int main(int argc, char* argv[]) {
    // FIXME: open the file whose name is in argv[1] into an ifstream object
    ifstream file_name;
    // FIXME: get the string to search for out of argv[2]
    string stringToSearchFor = argv[2],word;
    int count = 0; // # of times the word appears
    // your implementation here (use stringToSearchFor and count)
    // FIXME: search for the stringToSearchFor in the file and keep track of the count
    fixString(stringToSearchFor);
    file_name.open(argv[1]);
    if (file_name.is_open())
    {
        while (!file_name.eof())
        {
            file_name >> word;
            fixString(word);
            if(word==stringToSearchFor)
                count++;
        }
    }
    cout << "\"" << stringToSearchFor << "\""
        << " appears " << count << " times." << endl;

    return 0;
}