#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

/* atof:	convert string s to double */
double atof(char s[])
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); i++)		// skip white space
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
}

int main()
{
	char input[MAXLINE];
	char format[MAXLINE];
	double atof(char []);
	
	while (1) {
		fgets(input, MAXLINE, stdin);
		fgets(format, MAXLINE, stdin);

		printf(format, atof(input));
	}
}