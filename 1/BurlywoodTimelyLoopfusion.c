#include <stdio.h>

int main(void) {
  int c;
  int in_space = 0;

  c = getchar();

  while (c != EOF) {
    if(c != ' ' || !in_space)
      putchar(c);

    if(c == ' ')
      in_space = 1;
    else
      in_space = 0;

    c = getchar();
  }
  
  return 0;
}