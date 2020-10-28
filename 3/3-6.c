#include <stdio.h>
#include <ctype.h>

/*
itoa: convert n to characters in s
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
		v = n;
		if (v == 0)
			while (i != fw)
				s[i++] = ' ';
	
		s[i++] = n % 10 + '0';				// get next digit
	} while (((n /= 10) > 0) || i != fw);	// delete it
		if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int main()
{
	int c = 63, i = 10;
	char output[1000 + 1];

	itoa(c, i, output);

	printf("%s", output);
}