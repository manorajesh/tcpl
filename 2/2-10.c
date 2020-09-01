#include <stdio.h>

/*
Rewrite the function "lower", which converts upper case letters to 
lower case, with conditional expressions instead of "if-else".
*/

int lower(int c)
{
	c = (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
	return c;
}

int mainlower()
{
	int c;

	while ((c = getchar()) != EOF) {
		c = lower(c);
		putchar(c);
	}
}