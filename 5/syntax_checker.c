#include <stdio.h>

#define MAXLINE 1000
#define IN 1
#define OUT 0

int main()
{
	char input[MAXLINE]; 
	void syntax(char s[]);

	fgets(input, MAXLINE, stdin);						// stdin to input

	syntax(input);
}

void syntax(char s[])
{
	int c, i;											// counters for loop and array respectively
	int paren_state = 0, paren_trail = 0;				// counting whether s[i] is an open or closed parenthesis

	for (c = 0, i = 0; c < MAXLINE || s[i] == EOF; ++c, ++i) {		// entering main loop; 
		if (s[i] == '(') {
			++paren_trail;								//
			paren_state += 1;
		}
		else if (s[i] == ')') {
			paren_state > 0 ? paren_trail--, paren_state-- : paren_trail++, paren_state++;
		}
	}
	paren_trail == 1 ? printf("There is %d trailing parenthesis\n", paren_trail) : 
		printf("There are %d trailing parenthesis\n", paren_trail);
	
	paren_state == 1 ? printf("You are %d parenthesis level deep", paren_state) : 
		printf("You are %d parenthesis levels deep", paren_state);
}