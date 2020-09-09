#include <stdio.h>

#define MAXLINE 1000

/* Converting 24-hour time to 12-hour time */

/*
Enter 24-hour time:
> 15:42
= 3:42 PM
> 9:21 AM
= 9:21 AM
> 7:10
= 7:10 AM
*/

int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');

	return n;
}

int main()
{
	char input[MAXLINE + 1];
	char str[MAXLINE];
	char minutes[3];
	char seconds[2];

	printf("Enter 24-hour time\n");

	while (1) {
		printf("> ");

		int i = 0, m = i, h = m, j = h;
		int am = 1;

		if (strcmp(gets_s(input, MAXLINE + 1), "quit") == 0)
			break;

		for (i = 0; input[i] >= '0' && input[i] <= '9'; ++i)
			str[j++] = input[i];

		str[j] = '\0';

		h = atoi(str);

		for (++i, j = 0; input[i] > '0' && input[i] < '9'; ++i) {
			str[j++] = input[i];
		}

		m = atoi(str);

		if (h > 12) {
			am = 0;
			h -= 12;
		}

		printf("= %d:%d %s\n", h, m, am ? "AM" : "PM");
	}
}