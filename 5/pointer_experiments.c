#include <stdio.h>

int main()
{
	int x = 1, y = 2, z[10];	// data
	int *ip;					// pointer to int
	double *dp;

	ip = &y;
	x = *ip;
	y = 10;
	x = *ip;

	printf("%d\n", x);
	printf(&dp);
}