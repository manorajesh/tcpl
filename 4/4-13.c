#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

void reverse(char s[]);
int i;

int main()
{
	int c, l;
	char output[MAXLINE];

	for (i = 0, l = 0; ((c = getchar()) != EOF); ++i, ++l) {
		output[l] = c;
	}
	output[++l] = '\0';
	
	reverse(output);

	printf("%s", output);
}

void reverse(char s[])
{
	if (isalpha(s[i])) {
		reverse(s[])
	}
}