#include <stdio.h>
#include <ctype.h>

int main(void) {
  int c, i, j;                          //initialization
  
  int nchar[26];                        //array

  for (i = 0; i < 26; ++i)              //assigning 0 as elements
    nchar[i] = 0;

  while ((c = getchar()) != EOF)        //input
  {
    c = toupper(c);                     //converting c to uppercase
    if (c >= 'A' && c <= 'Z')           //checking if c is a letter
      ++nchar[c-'A'];
  }
  /*
  for (i = 0; i < 26; ++i) {            //printing nchar
    printf("%d:", i + 1);
    for (j = 0; j < nchar[i]; j += 1)   //printing histogram based on value of nchar[i]
      printf("*");                      //histrogram look
    printf("\n");                       //making it horizonal
  }
  */

  for (i = -1; i < 26; ++i) {            //printing nchar
    printf("%c:", i + 1 + 'A');
    for (j = 0; j < nchar[i]; j += 1)   //printing histogram based on value of nchar[i]
      printf("*");                      //histrogram look
    printf("\n");                       //making it horizonal
  }
}