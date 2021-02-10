#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000
#define INCREMENT 1

void caesarshift(int *in);

int main()
{
	int c = 3;
	char output[MAXLINE];

	//fgets(output, MAXLINE, stdin);

	caesarshift(&c);
}

void caesarshift(int *in)
{
	if (!isalpha(*in)) {
		if (*in / 10) {
			caesarshift(*in / 10);
			*in += INCREMENT;
		}
	}
	else if (isalpha(*in)) {
		toupper(*in);

		*in -= '0';
		*in = (*in + INCREMENT) % 26;
		*in += '0';
	}
}