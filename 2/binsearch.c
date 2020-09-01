#include <stdio.h>

int binsearch(int x, int v[], int n)
{
	int low, mid, high;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else	// found match
			return mid;
	}
	return -1; // no match
}

int main()
{
	int c = 0, i;
	
	int scad[1000];
	for (i = 0; i <= 1000; i++)
		scad[i] = i;

	i = 100;
	binsearch(i, scad[999], c);
}