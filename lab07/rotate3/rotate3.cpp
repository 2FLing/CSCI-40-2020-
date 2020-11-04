#include <iostream>
using namespace std;
#include "rotate3.h"

// FIXME: implement the rotate3 function here
// it rotates all numbers to the RIGHT,
// for example:
//   int x = 42, y = 43, z = 44;
//   rotate3(&x, &y, &z);
// after those two lines, y = 42, z = 43, and x = 44
// If any pointers are null, your function should do nothing
void rotate3(int* a, int* b, int* c)
{
	if (a != NULL and b != NULL and c != NULL)
	{
		int temp_x, temp_y, temp_z;
		temp_x = *c;
		temp_y = *a;
		temp_z = *b;
		*a = temp_x;
		*b = temp_y;
		*c = temp_z;
	}

}