#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;
double StepsToMiles(double);

double StepsToMiles(double miles)
{
	return miles / 2000.0;
}

int main()
{
	double miles;
	cin >> miles;
	cout << fixed << setprecision(2);
	cout << StepsToMiles(miles) << endl;

	return 0;
}