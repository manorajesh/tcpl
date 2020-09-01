#include <stdio.h>

int squeeze(char s[], char c[])
{
	int i, j, r;

	for (r = j = 0; c[r] != '\0'; r++) {
		for (j = i = 0; s[i] != '\0'; i++) {
			if (s[i] != c[r])
				s[j++] = s[i];
		}
		s[j] = '\0';
	}
}

int mains()
{
	char s[] = "scad";
	char c[] = "ad";
	squeeze(s, c);
}