#include <stdio.h>
#include <ctype.h>

int main(void) {
  int c;

  while ((c = getchar()) != EOF)
  {
    c = toupper(c);
    printf("%c %d: %d\n", c, c, c - 'A');
  }
  return 0;
}