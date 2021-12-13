#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

/*
input = 10.23

output = 1.023e+1
*/

int main()
{
	int c = 0, i, dp = 0;
	char output[MAXLINE];
	double input = 10.23;
	
	sprintf_s(output, MAXLINE, "%lf", input);

	for (i = 0; c != '\0'; ++i) {
		c = output[i];
		if (c == '.')
			dp = i;
		else if (i >= 1)
			output[i] = output[i + 1];
	}
	printf("%se+%d", output, dp);
}