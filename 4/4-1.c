#include <stdio.h>
#include <string.h>
#define MAXLINE 1000						// maximum input line length

/*
Write the function strindex(s, t), which return the position of the
rightmost occurence of t in s, or -1 if there is none.
*/

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";					// pattern to search for

/* find all lines matchig pattern */
int main()
{
	char line[MAXLINE];
	int found = 0;

	while (getline(line, MAXLINE) > 0)
		if (strindex(line, pattern) >= 0) {
			printf("%s\n%d", line, strindex(line, pattern));
			found++;
		}
	return found;
}

/* getline: get line into s, return length */
int getline(char s[], int lim)
{
	int c, i;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

/* strindex: return index of t in s, -1  if none */
int strindex(char s[], char t[])
{
	int i, j, k, l;

	l = strlen(t) - 1;

	for (i = strlen(s); i >= 0; i--) {
		for (j = i, k = l; t[k] != t[0] && s[j] == t[k]; j--, k--)
			;
		if (k < l && t[k] == t[0])
			return i;
	}
	return -1;
}