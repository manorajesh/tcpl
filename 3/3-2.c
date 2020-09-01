#include <stdio.h>

/*
Write a function escape(s, t) that converts characters like newline and
tab into visible escape sequences like \n and \t as it copies the
string t to s. Use a switch. Write another function for the other
direction, converting escape sequences into the real characters.
*/

#define MAXLINE 1000

void escape(char s[], char t[])
{
	int i, j;

	for (j = i = 0; t[i] != '\0'; ++i, ++j) {
		switch (t[i]) {
		case '\n':
			s[j] = '\\';
			s[++j] = 'n';
			break;
		case '\t':
			s[j] = '\\';
			s[++j] = 't';
			break;
		case '\b':
			s[j] = '\\';
			s[++j] = 'b';
			break;
		case '\r':
			s[j] = '\\';
			s[++j] = 'r';
			break;
		default:
			s[j] = t[i];
			break;
		}
	}

	s[j] = '\0';
}

void inescape(char s[], char t[])					//inverse of escape(s, t)
{
	int i, j;

	for (j = i = 0; t[i] != '\0'; ++i, ++j) {
		switch (t[i]) {
		default:
			s[j] = t[i];
			break;
		case '\\':
			switch (t[++i]) {
			case 'n':
				s[j] = '\n';
				break;
			case 't':
				s[--j] = '\t';
				++i;
				break;
			case 'b':
				s[--j] = '\b';
				++i;
				break;
			case 'r':
				s[--j] = '\r';
				++i;
				break;
			}
		}
	}

	s[j] = '\0';
}

int main()
{
	int c, i;

	char input[MAXLINE + 1];
	char output[MAXLINE + 1];
	char output2[MAXLINE + 1];

	for (i = 0; (c = getchar()) != EOF; ++i) {
		input[i] = c;
	}

	input[i] = '\0';

	escape(output, input);

	printf("%s\n", output);

	inescape(output2, output);

	printf("%s\n", output2);
}