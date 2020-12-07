#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXLINE 1000

/*
Encrypt plaintext recieved using Vigerene Cipher, skipping spaces

Example Input and Output:

Enter Key:
white

Enter Plaintext:
hello this is my poop
DLTESPOQLMOTGISKW
*/

void repeat(char s[])						// copy key until end of array
{											// (eg. white\n --> whitewhitewhitewhite...)
	int i = -1, j;
	char clipboard[MAXLINE];

	do {									// copy s[] to clipboard
		++i;
		clipboard[i] = s[i];
	} while (s[i] != '\n');

	for (j = 0; i < MAXLINE; ++i, ++j) {	// paste key from clipboard to s[]
		if (clipboard[j] == '\n') {
			j = 0;
			s[i] = clipboard[j];
		}
		else
			s[i] = clipboard[j];
	}
}

char vigmod(char k, char p)					// Vigenere Cipher using modulo (joop)
{
	k = toupper(k) - 'A';
	p = toupper(p) - 'A';

	p += k;									// displace p by k to get result
	p %= 26;							    // "wrap" the result around (repeat)
											// eg. 25 + 26 = 51 --> 25 % 51 = 25 (Y)
	p += 'A';								// ASCII conversion

	return p;
}

char vigenere(char k, char p)				// Vigenere Cipher using conditionals (mano)
{
	char ci;								// declare cipher result

	k = toupper(k);
	p = toupper(p);

	ci = (p + k) - 'A';						// displace p by k and subtract by 'A' to get ASCII 

	if (ci > 'Z') {							// "wrap" around result around (repeat)
		ci -= 'Z';
		ci += '@';							// Key starts on 1 (A = 1, B = 2...) 
	}										// Plaintext starts on 0 (A = 0, B = 1...)
	
	return ci;
}

int main()
{
	int c, i, l, j;

	char key[MAXLINE];
	char plaintext[MAXLINE];
	char ciphertext[MAXLINE];

	printf("Enter Key:\n");
	fgets(key, MAXLINE, stdin);			// standard input

	printf("\nEnter Plaintext:\n");
	fgets(plaintext, MAXLINE, stdin);	// standard input
		
	l = strlen(key) - 1;				// string length for modulo computing

	for (i = 0, j = 0; plaintext[i] != '\0'; ++i) {
		if (isalpha(plaintext[i])) 
			ciphertext[j++] = vigenere(key[j % l], plaintext[i]);	// using j to skip spaces
	}
	ciphertext[j] = '\0';

	puts(ciphertext);
}
