`#include <stdio.h>

int maino(void)
{
    int n;
    int numbers[100];
    
    // Fibonacci sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34...
    numbers[0] = 1;
    numbers[1] = 1;
    
    for(n = 2; n < 100; n++) {
        numbers[n] = numbers[n - 2] + numbers[n - 1]; //set the nth element of the array
    }
    
    for(n = 0; n < 100; n++)
        printf("<%d> = %d\n", n, numbers[n]);
}
/*
int main(void)
{
  int f1, f2, f3, f4, f5;
  int f, fprev, fold;
  int n;

  f1 = 1;
  printf("%d\n", f1);

  f2 = 1;
  printf("%d\n", f2);

  f3 = f1 + f2;
  printf("%d\n", f3);

  f4 = f3 + f2;
  printf("%d\n", f4); 

  f5 = f4 + f3; 
  printf("%d\n", f5);

  fprev = f5;
  f = f5 + f4;
  for(n = 6; n < 20; n++) {
    printf("%d\n", f);
    fold = fprev;
    fprev = f;
    f = f + fold; 
  }

}  
 *\