#include<iostream>
using namespace std;
int main() {

    int a, b, c, d;
    cout << "Type the first number: ";
    cin >> a;
    cout << "Type the second number: ";
    cin >> b;
    cout << "Type the third number: ";
    cin >> c;
    d = (a + b + c) / 3;

    cout << "The average is " << d << "." << endl;

    return 0;
}