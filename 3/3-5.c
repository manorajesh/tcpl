#include <stdio.h>

/*
Write the function itob(n,s,b) that converts the integer n into a
base b character representation in the string s. In particular,
itob(n,s,16) formats as a hexadecimal integer in s.


n	b	s
29	10	29
29	2	11101 
29	8	35             8 = 10  16 = 20  24 = 30
29	16	1D			   10 = A  16 = 10  1A = 26  1D = 29
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

void itob(int n, char s[], int b)
{
	int i, sign, c;

	if ((sign = n) < 0)
		n = -n;

	i = 0;
	do {
		c = n % b + '0';
		if (c >= 58)
			c += 7;
		s[i++] = c;
	} while ((n /= b) > 0);

	if (sign < 0)
		s[i++] = '-';
	
	s[i] = '\0';
	reverse(s);
}

int main()
{
	int i = 48879, b = 16;
	char output[1000];
	itob(i, output,b);

	printf("%s\n", output);
}