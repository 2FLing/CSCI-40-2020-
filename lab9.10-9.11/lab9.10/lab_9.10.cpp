#include <iostream>
#include <string>

using namespace std;

int DateParser(string month) {
    int monthInt = 0;

    if (month == "January")
        monthInt = 1;
    else if (month == "February")
        monthInt = 2;
    else if (month == "March")
        monthInt = 3;
    else if (month == "April")
        monthInt = 4;
    else if (month == "May")
        monthInt = 5;
    else if (month == "June")
        monthInt = 6;
    else if (month == "July")
        monthInt = 7;
    else if (month == "August")
        monthInt = 8;
    else if (month == "September")
        monthInt = 9;
    else if (month == "October")
        monthInt = 10;
    else if (month == "November")
        monthInt = 11;
    else if (month == "December")
        monthInt = 12;
    return monthInt;
}

int main() {

    // TODO: Read dates from input, parse the dates to find the one
    //       in the correct format, and output in m/d/yyyy format
    string input = "none", month, day, year;
    int month_in_num;
    while (input != "-1")
    {
        getline(cin, input);

        if (input.find(",") <= input.size())
        {
            month = input.substr(0, input.find_first_of(" "));
            day = input.substr(input.find_first_of(" ") + 1, input.find_first_of(",") - input.find_first_of(" ") - 1);
            year = input.substr(input.find_last_of(" ") + 1);
            month_in_num = DateParser(month);
            cout << month_in_num << "/" << day << "/" << year << endl;
        }

    }
    return 0;
}