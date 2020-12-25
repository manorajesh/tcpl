#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

/* atof:	convert string s to double */
double atof(char s[])
{
	double val, power, scino;
	int i, j, sign, scino_sign, scino_expo;

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

	scino = 1.0;
	if (s[i] == 'e' || s[i] == 'E') {
		scino_sign = (s[++i] == '-') ? -1 : 1;
		if (s[i] == '+' || s[i] == '-')
			i++;

		for (scino_expo = 0.0; isdigit(s[i]); ++i)
			scino_expo = 10.0 * scino_expo + (s[i] - '0');

		for (j = 0; scino_expo > j; ++j) {
			if (scino_sign == -1)
				scino /= 10.0;
			else
				scino *= 10.0;
		}
	}
	return (sign * val / power) * scino;
}

int main()
{
	char input[MAXLINE];
	char format[MAXLINE];
	double atof(char[]);

	while (1) {
		fgets(input, MAXLINE, stdin);
		fgets(format, MAXLINE, stdin);

		printf(format, atof(input));
	}
}