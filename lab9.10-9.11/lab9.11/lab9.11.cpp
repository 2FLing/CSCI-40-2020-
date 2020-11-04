#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Type your code here. */
    string input = "none", first_word, second_word, temp, wts;
    int index;
    while (input != "q")
    {
        cout << "Enter input string:" << endl;
        getline(cin, input);
        index = 1;
        if (input == "q")
            break;
        if (input.find(",") <= input.size())
        {
            temp = input.at(0);
            for (index; index <= input.find(','); index++)
            {
                wts = input.at(index);
                if (wts != " " and wts != ",")
                    temp.append(wts);
            }
            first_word = temp;
            temp.clear();
            for (index; index < input.size(); index++)
            {
                wts = input.at(index);
                if (wts != " ")
                    temp.append(wts);
            }
            second_word = temp;
            cout << "First word: " << first_word << endl;
            cout << "Second word: " << second_word << endl;
        }
        else
            cout << "Error: No comma in string." << endl;
        cout << endl;
    }
    return 0;
}