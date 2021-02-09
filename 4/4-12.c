/*
* Adapt the ideas of printd to write a recursive version of itoa that
* is, convert an integer into a string by calling a recursive routine.
*/
#include <stdio.h>

#define MAXLINE 1000

void itoa(int n, char s[]);

int i = 0;

int main()
{
	long int c = -342554199;
	char output[MAXLINE];

	itoa(c, output);

	output[i] = '\0';

	printf("%s", output);
}

void itoa(int n, char s[])
{
	if (n < 0) {
		s[i++] = '-';
		n = -n;
	}

	if (n / 10)
		itoa(n / 10, s);
	s[i++] = n % 10 + '0';
}