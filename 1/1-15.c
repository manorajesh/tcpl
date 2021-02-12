#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int conversion(int degree);

int main(void) {
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
  {
    printf("%d %d\n", fahr, conversion(fahr));
  }

  return 0;
}

int conversion(int degree)
{
  degree = (5.0/9.0) * (degree-32.0);
}