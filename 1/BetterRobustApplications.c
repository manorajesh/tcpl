
#include <stdio.h>
#define MAXLINE 1000

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

int main1_9(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = mygetline(line, MAXLINE)) > 0) //while (there's another line)
        if (len > max)
        {                        //  if (it's longer then the previous longest)
            max = len;           //  save its length
            copy(longest, line); //  save it
        }
    if (max > 0)
        printf("%s", longest); // print longest line
    return 0;
}

int mygetline(char s[], int lim)
{
    char c = '\0';
    int i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

