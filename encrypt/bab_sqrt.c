#include <stdio.h>

double babylonian_sqrt(double S);

int main()
{
    double sq = 1256850198487098;

    printf("%e", babylonian_sqrt(sq));
 }

double babylonian_sqrt(double S) {
    if (S == 0) return 0; 
    
    int i;
    double x = S/2;

    for (i = 0; i <= 100; ++i)
        x = 1.0/2 * (x + S/x);
    return x;
}