#include <stdio.h>

int array_main(void) {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for(i = 0; i < 10; i++)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  }

  printf("digits =");
  for(i = 0; i < 10; i++)
    printf("%d", ndigit[i]);
  printf(", white spaces = %d, other = %d", nwhite, nother);
}

int main(void) {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  nzero = none = ntwo = nthree = nfour = nfive = nsix = nseven = neight = nnine = 0;

  while ((c = getchar()) != EOF)
  {
    switch (c) {
    case '0':
      ++ndigit[0];
      break;
    case '1':
      ++ndigit[1];
      break;
    case '2':
      ++ndigit[2];
      break;
    case '3':
      ++ndigit[3];
      break;
    case '4':
      ++ndigit[4];
      break;
    case '5':
      ++ndigit[5];
      break;
    case '6':
      ++ndigit[6];
      break;
    case '7':
      ++ndigit[7];
      break;
    case '8':
      ++ndigit[8];
      break;
    case '9':
      ++ndigit[9];
      break;
    case ' ':
    case '\n':
    case '\t':  
      ++nwhite;
      break;
    default:
        ++nother;
        break;
    }
  }

  printf("digits = ");
  printf("%d %d %d %d %d %d %d %d %d %d ", nzero, none, ntwo, nthree, nfour, nfive, nsix, nseven, neight, nnine);
  printf(", white spaces = %d, other = %d", nwhite, nother);
}

int dumb_main(void) {
  int c, i, nwhite, nother;
  int nzero, none, ntwo, nthree, nfour, nfive, nsix, nseven, neight, nnine;

  nwhite = nother = 0;
  nzero = none = ntwo = nthree = nfour = nfive = nsix = nseven = neight = nnine = 0;

  while ((c = getchar()) != EOF)
  {
    switch (c) {
    case '0':
      ++nzero;
      break;
    case '1':
      ++none;
      break;
    case '2':
      ++ntwo;
      break;
    case '3':
      ++nthree;
      break;
    case '4':
      ++nfour;
      break;
    case '5':
      ++nfive;
      break;
    case '6':
      ++nsix;
      break;
    case '7':
      ++nseven;
      break;
    case '8':
      ++neight;
      break;
    case '9':
      ++nnine;
      break;
    case ' ':
    case '\n':
    case '\t':  
      ++nwhite;
      break;
    default:
        ++nother;
        break;
    }
  }

  printf("digits = ");
  printf("%d %d %d %d %d %d %d %d %d %d ", nzero, none, ntwo, nthree, nfour, nfive, nsix, nseven, neight, nnine);
  printf(", white spaces = %d, other = %d", nwhite, nother);
}