#include <algorithm>
#include <cmath>
#include <stdexcept>
#include<iostream>
#include "sqrt.h"
using namespace std;

// FIXME: return true if the two numbers are within 0.000001 of each other
bool approxEqual(double a, double b) {
	double difference;
	difference = abs(a - b);
	if (difference > 0.000001)
		return false;
	else
		return true;
}

// FIXME: implement this function by making repeated guesses
// FIXME: throw a runtime_error if x < 0
double squareRoot(double x) {
	double low = 0, up =max(1.0,x) , mid = (low + up) / 2;
	if (x < 0)
	{
		throw runtime_error("");
	}
	else
	{
		while (!approxEqual(mid * mid, x))
		{
			if (mid * mid > x)
			{
				up = mid;
			}
			else 
				low = mid;
			mid = (up + low) / 2;

		}
	}
	return mid;

}