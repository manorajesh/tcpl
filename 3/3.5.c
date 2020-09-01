#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

/*atoi: convert s to itger; version 2 */

int atoi(char s[])						// anything to integer
{
	int i, n, sign;

	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')		// skip white space
		i++;
	for (n = 0; isdigit(s[i]); i++)		// skip sign
		n = 10 * n + (s[i] - '0');
	return sign * n;
}

int main()
{
	int i, c;
	char input[MAXLINE + 1];

	for (i = 0; (c = getchar()) != EOF; ++i) {
		input[i] = c;
	}

	printf("%s", atoi(input));
}