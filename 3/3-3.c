#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

/* Write a function expand(s1, s2) that expands shorthand notation
like a-z in the string s1 into the equivalent complete list abc..xyz in
s2. Allow for letters of either case and digits, and be prepared to
handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or
trailing - is taken literally.

a-z		abcdefghijklmnopqrstuvwxyz
a-b-c	abc
a-z0-9	abcdefghijklmnopqrstuvwxyz0123456789
-a-z	-abcdefghijklmnopqrstuvwxyz
q-t-	qrst-
a--h	a--h
j-a		j-a
a-0-9-z	a-0-9-z


*/

char dummyexpand(char s1[], char s2[])
{
	int i, j, a, m = 0;

	char alphabet[27] = "abcdefghijklmnopqrtuvwxyz";

	for (j = i = 0; j <= MAXLINE || i <= MAXLINE; ++i) {
		if (s1[i] == '-') {
			if (s1[i - 1] >= 97 || s1[i - 1] <= 122
				&& s1[i + 1] >= 97 || s1[i + 1] <= 122) {
				while (alphabet[m] != s1[i - 1])
					++m;
				for (s2[--j] = alphabet[m]; alphabet[m] != s1[i + 1]; ++j, ++m) {
					s2[j] = alphabet[m];
				}
				s2[j] = s1[i + 1];
			}
		}
		else {
			s2[j++] = s1[i];
		}
	}
	s2[++j] = '\0';
}

char expand(char s1[], char s2[])
{
	int i, j, m = 0;

	char alphabet[] =	"abcdefghijklmnopqrstuvwxyz"
						"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
						"0123456789";

	for (j = i = 0; s2[i] != '\0' && j < MAXLINE; ++i) {
		if (s1[i] == '-') {
			while (alphabet[m] != s1[i - 1])
				++m;
			for (s2[--j] = alphabet[m]; alphabet[m] != s1[i + 1]; ++j, ++m) {
				s2[j] = alphabet[m];
			}
			s2[j] = s1[i + 1];
		}
		else {
			s2[j++] = s1[i];
		}
	}

	s2[++j] = '\0';
}


int main()
{
	char input[MAXLINE + 1];
	char output[MAXLINE + 1];

	while (1) {
		printf("> ");
		if (strcmp(gets_s(input, MAXLINE + 1), "quit") == 0)
			break;

		expand(input, output);
		
		printf("%s\n", output);
	}
}