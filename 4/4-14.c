/*
* Define a macro swap(t,x,y) that interchanges two arguments of type t.
* (Block structure will help.)
*/

#include <stdio.h>
#include "mano.h"

int main()
{
	double j = 2.7;
	double i = 4.2;

	swap(double, j, i);						// macro

	printf("i = %f\nj = %f\n", i, j);
}