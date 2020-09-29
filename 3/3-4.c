#include <stdio.h>
#include <ctype.h>

/*
In a two's complement number representation, our version of itoa does
not handle the largest negative number, that is, the value of n equal
to -(2^wordsize-1). Explain why not. Modify it to print that value
correctly, regardless of the machine on which it runs.
*/

/*
In a two's complement number representation, the lowest negative number
would be -(2^wordsize-1) and (2^wordsize-1) - 1, because there is one place for the number 0.
*/

void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}


void itoa(int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)			// record sign
		n = -n;					// make n positive
	i = 0;
	do {						// generate digits in recerse order
		s[i++] = n % 10 + '0';	// get next digit
	} while ((n /= 10) > 0);	// delete it
	if (sign < 0)
		s[i++] = '-';
	s[i] = '/0';
	reverse(s);
}

int main()
{
	long signed int c = -363;
	char output[1000 + 1];

	itoa(c, output);

	printf("%s", output);
}