#include <iostream>
#include "Triangle.h"
using namespace std;

int main(int argc, const char* argv[]) {
	Triangle triangle1;
	Triangle triangle2;
	Triangle result;
	double trianBase, trianHeight;
	// TODO: Read and set base and height for triangle1 (use SetBase() and SetHeight())
	cin >> trianBase;
	cin >> trianHeight;
	triangle1.SetBase(trianBase);
	triangle1.SetHeight(trianHeight);
	// TODO: Read and set base and height for triangle2 (use SetBase() and SetHeight())
	cin >> trianBase;
	cin >> trianHeight;
	triangle2.SetBase(trianBase);
	triangle2.SetHeight(trianHeight);
	// TODO: Determine larger triangle (use GetArea())
	if (triangle1.GetArea() > triangle2.GetArea())
		result = triangle1;
	else
		result = triangle2;
	cout << "Triangle with larger area:" << endl;
	// TODO: Output larger triangle's info (use PrintInfo())
	result.PrintInfo();

	return 0;
}