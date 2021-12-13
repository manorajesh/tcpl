#include <stdio.h>

#define MAXLINE 10

void logistic_map(double r, double* x) 
{
    int i;

    for (i = 0; i < MAXLINE; ++i)
        x[i + 1] = r * x[i] * (1 - x[i]);
}

int main()
{
    double x[MAXLINE];
    double r = 1;
    double i;

    logistic_map(r, x);

    for (i = 0; i < MAXLINE; i += 1) {
        if (i < MAXLINE)
            printf("*");
        else
            printf("\n");
    }
}