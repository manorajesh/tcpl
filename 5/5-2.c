#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define BUFSIZE	100
#define MAXLINE 10000

int getch(void);
void ungetch(int);

char buf[BUFSIZE];		// buffer for ungetch
int bufp = 0;			// next free position in buf

int getint(int* pn);
double getfloat(double* pn);

int main()
{
	int e = 1023;

	getint(e);
	printf(e);
}

/* getfloat: get next floating-point from input into *pn */
double getfloat(double* pn)
{
	int c, sign, fp;

	while (isspace(c = getch()))	// skip white space
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.') {
		ungetch(c);		// it's not a number
		return 0;
	}

	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0; isdigit(c) || c == '.'; c = getch()) {
		if (c != '.')
			++fp;
		*pn = 10 * *pn + (c - '0');
	}
	*pn *= sign;
	*pn /= pow(10, fp);

	if (c != EOF)
		ungetch(c);
	return c;
}

/* getint: get next integer from input into *pn */
int getint(int* pn)
{
	int c, sign;

	while (isspace(c = getch()))	// skip white space
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);		// it's not a number
		return 0;
	}

	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;

	if (c != EOF)
		ungetch(c);
	return c;
}

int getch(void)			// get a (possibly pushed back) character
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)		// push character back on input
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}