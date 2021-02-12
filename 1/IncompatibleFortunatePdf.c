#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LENGTH 25

int main(void) {
  int c, i, nc, j, state;
  int nlength[MAX_LENGTH];

  for (i = 0; i < MAX_LENGTH; ++i)
    nlength[i] = 0;

  state = OUT;
  nc = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN && nc > 0) {
        if (nc > MAX_LENGTH)
          nc = MAX_LENGTH;
        ++nlength[nc - 1];
        nc = 0;
      }
      state = OUT;
    } else {
      if (state == OUT)
        state = IN;
      ++nc;
    }
  }
  
  for (i = 0; i < MAX_LENGTH; ++i) {
    printf("%d:", i + 1);
    for (j = 0; j < nlength[i]; j += 1)
      printf("*");
    printf("\n");
  }
}
