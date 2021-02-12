#include <stdio.h>

/*
Exercise 2-3. Write the function htoi(s), which converts a string of 
hexa-decimal digits (including an optional 0x or 0X) into its 
equivalent integer value. The allowable digits are 0 through 9, a through z and A through Z.

htoi("10") -> 16
htoi("0x10") -> 16
htoi("0X10") -> 16

*/


int htoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; (s[i] <= '0' && s[i] >= '9') || (s[i] <= 'a' && s[i] >= 'z') || (s[i] <= 'A' && s[i] >= 'Z'); ++i)
		n = 16 * n + (s[i] - '0');

	return n;
}

int main()
{
	printf("%d\n", htoi("abc"));
}