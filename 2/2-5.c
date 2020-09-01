#include <stdio.h>

/*
Write the function any(s1, s2), which returns the first location in the
string s1 where any character from the string s2 occurs, or -1 if s1
contains no characters from s2. (The standard library strpbrk does the
same job but returns the pointer to the location).
*/

#define MAXLINE 1000

int any(char s[], char c[])
{
	int i, j, r, l;

	int result[MAXLINE + 1];
	for (i = 0; i <= MAXLINE; i++)
		result[i] = -1;

	for (r = j = 0; c[r] != '\0'; r++) {
		for (i = 0; s[i] != '\0'; i++) {
			if (s[i] == c[r])
				result[j++] = i;
		}
	}

	l = MAXLINE + 2;
	for (i = 0; i < MAXLINE; i++) {
		if (result[i] != -1) {
			if (result[i] < l)
				l = result[i];
		}
	}

	if (l == 1002)
		return -1;			//If there is no matching characters, return -1
	else
		return l + 1;		//Counteracting zero-indexing
			
}

int mainany()
{
	printf("%d\n", any("scad", "the number 1 should be printed, as it is"
						"the first character in the first string"));
}