#include <stdio.h>

int main(void) {
  float n;

  n = 1.0;
  while(n <= 10.1)
  {
    printf("%0.1f\n", n);
    n = n + 0.1;
    ++n;
  }

  int i;

  i = 1;

  printer:
  printf("%d\n", i);
  
  if (i == 10){
    goto exit;
  }
  
  i = i + 1;

  goto printer;

  exit:

  for (i = 1; i <= 10; i += 2)
    printf("%d\n", i);
}