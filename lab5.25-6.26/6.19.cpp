#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;
double MilesToLaps(double);

double MilesToLaps(double miles)
{
	return miles / 0.25;
}

int main()
{
	double miles;
	cin >> miles;
	cout << fixed << setprecision(2);
	cout << MilesToLaps(miles) << endl;

	return 0;
}