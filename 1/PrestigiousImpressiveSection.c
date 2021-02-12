#include <stdio.h>

int main() {
  //int c;

  /*
  //c = getchar();
  while(c != EOF)
  {
    putchar(c);
    c = getchar();
  }
  */

  /*
  printf("Hello what is your name?\n");

  while(c != EOF)
  {
    putchar(c);
    c = getchar();
    printf("Oh hello %d", c);
  }
  */
  /*
  while(c = (getchar() != EOF))
  {
      putchar(c);
  }
  */

  //printf("%d", EOF);

  /*
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)          //null statement doesn't work
    ;  
  printf("%.0f\n", nc);
  */
 /*
  for (nc = 0; getchar() != EOF; ++nc)
    printf("%.0f\n", nc); */
/*
  int c, nl;

  nl = 0;
  while((c = getchar()) != EOF)
  {
    if (c == '\n')
      ++nl;
    printf("newlines, %d\n", nl);
    if (c == '\t')
      ++nl;
    printf("tabs, %d\n", nl);
    if (c == '\b')
      ++nl;
    printf("backspaces, %d\n", nl);
  }

  while((c = getchar()) != EOF)
  {
    if (c == ' ')
      printf(" ");
    putchar(c);
  }
*/
/*
  int n;

  n = getchar();

  printf('n');
*/
/*
int c;

c = getchar();
while((c = getchar()) != EOF)
{
  putchar(c);
  printf("\n");
}
*/

int c;

c = getchar();
while ((c = getchar()) != EOF)
{
  if (c == '\b')
    printf("\\b");
  else if (c == '\t')
    printf("\\t");
  else if (c == '\\')
    printf("\\\\");
  else
    putchar(c);
}


/*
#define IN 1
#define OUT 0

int c, nl, nw, nc, state;

state = OUT;
nl = nw = nc = 0;
while((c = getchar()) != EOF)
{
  ++nc;
  if (c == '\n')
    ++nl;
  if (c == ' ' || c == '\n' || c == '\t')
    state = OUT;
  else if (state == OUT) {
    state = IN;
    ++nw;
  }
}
printf("%d %d %d\n", nl, nw, nc);
*/

}
