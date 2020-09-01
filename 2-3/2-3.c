#include <stdio.h>

/*
Exercise 2-3. Write the function htoi(s), which converts a string of
hexa-decimal digits (including an optional 0x or 0X) into its
equivalent integer value. The allowable digits are 0 through 9,
a through f and A through F.

htoi("10") -> 16
htoi("0x10") -> 16
htoi("0X10") -> 16

*/


int htoi(char s[])
{
	int i, n, m;

	n = 0;
	for (i = 0; (s[i] >= '0' && s[i] <= '9')
		|| (s[i] >= 'a' && s[i] <= 'f')
		|| (s[i] >= 'A' && s[i] <= 'F'); ++i) {

		if (s[i] >= 'a' && s[i] <= 'f')
			m = 87;
		else if (s[i] >= 'A' && s[i] <= 'F')
			m = 55;
		else
			m = 48;

		n = 16 * n + (s[i] - m);

	}

	return n;
}

int jhtoi(char s[])
{
	int i, n, m;

	n = 0;
	for (i = 0;
		(s[i] >= '0' && s[i] <= '9')
		|| (s[i] >= 'a' && s[i] <= 'f')
		|| (s[i] >= 'A' && s[i] <= 'F');
		++i) {

		m = s[i] - '0';

		if (m > 9)
			m -= 7;

		if (m > 15)
			m -= 32;

		n = 16 * n + m;
	}

	return n;
}

int mainhex(void)
{
	printf("%d\n", jhtoi("AbC"));
}