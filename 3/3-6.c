#include <stdio.h>

/*
Write a version of itoa that accepts three arguments instead of two.
The third argument is a minimum field width; the converted number must
be padded with blanks on the left if necessary to make it wide enough.
*/

/*
Bugs: Using zeros as the first argument doesn't work, returns a single zero.
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

void itoa(int n, int fw, char s[])
{
	int i, sign, v;

	if ((sign = n) < 0)						// record sign
		n = -n;								// make n positive
	i = 0;
	do {									// generate digits in reverse order
		s[i++] = n % 10 + '0';				// get next digit
	} while (((n /= 10) > 0));				// delete it

	while (i < fw) {						// add spaces if i is less than field width
		while (i < fw)
			s[i++] = ' ';
	}

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int main()
{
	int c = 00000, i = 5;
	char output[1000 + 1];

	itoa(c, i, output);

	printf("%s", output);
}