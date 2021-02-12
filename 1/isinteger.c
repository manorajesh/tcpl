#include <stdio.h>
#define MAXLINE 1000

char isinteger(char s[])
{
        int i, j;
        char output[MAXLINE + 1];

        for (i = 0, j = 0; s[i] != EOF; ++i)
                output[j++] = s[i] >= '0' || s[i] <= '9' ? i : ',';

        return output;
}

int main()
{
        int c, i;
        char input[MAXLINE];

        for (i = 0; ((c = getchar()) != EOF); ++i) {
                input[i] = c;
        }

        printf("%s\n", isinteger(input));
}


