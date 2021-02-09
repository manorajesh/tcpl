/*
* Write a recursive version of the function reverse(), which reverses
* the string s in place
*/
#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

void reverse(char s[], int l, int h);

int main()
{
	char output[MAXLINE];

	fgets(output, MAXLINE, stdin);
	output[strlen(output) - 1] = '\0';

	reverse(output, 0, strlen(output) - 1);

	printf("%s", output);
}

void reverse(char s[], int l, int h)
{
	char c;

	if (l < h) {
		c = s[l];								// s[0] -> s[4] && s[4] -> s[0]
		s[l++] = s[h];
		s[h--] = c;
		reverse(s, l, h);
	}
}