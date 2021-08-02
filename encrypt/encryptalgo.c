#include <stdio.h>

#define MAXLINE 1000
/*
  while (character is not EOF) {
   character = character * charcter * counter of strlen
}
*/

char encrypt_string(char input[], char output[]);
int encrypt_int(char input[]);
void encrypt_string_read(char input[], char output[]);

int main(void) {
  char input[MAXLINE];
  char output[MAXLINE];
  int i;

  fgets(input, MAXLINE, stdin);

  //encrypt_string(input, output);
  //printf("%s", output);

  encrypt_string_read(input, output);
  
  for (i = 0; input[i] != EOF; ++i)
    printf("%d\0", output[i]);
}

char encrypt_string(char input[], char output[])
{
  int cou2;
  int c = 0;

  for (c = 0, cou2 = 0; input[c] != EOF; ++c)
    cou2 += c;

  for (c = 0; input[c] != EOF; ++c, --cou2) {
    output[c] = input[c] * input[c] + cou2;
  }
  return output;
}

int encrypt_int(char input[])
{
  int cou2;
  int c = 0;
  int output[MAXLINE];

  for (c = 0, cou2 = 0; input[c] != EOF; ++c)
    cou2 += c;

  for (c = 0; input[c] != EOF; ++c, --cou2) {
    output[c] = (input[c] * input[c] + cou2) % 127;
  }
  return output;
}

void encrypt_string_read(char input[], char output[])
{
  int c, cou2;

  for (c = 0, cou2 = 0; input[c] != EOF; ++c)
    cou2 += c;

  for (c = 0; input[c] != EOF; ++c, --cou2) {
    output[c] = input[c] * input[c] + cou2;
    output[c] = output[c] % 126;
    output[c] += 49;
    output[c] = output[c] == 127 ? 1 : output[c];
  }
}

void decrypt_string_read(char input[], char output[])
{
  int c, cou2;

  for (c = 0, cou2 = 0; input[c] != EOF; ++c)
    cou2 += c;

  for (c = 0; input[c] != EOF; ++c, --cou2) {
    output[c] = input[c] * input[c] + cou2;
    output[c] = output[c] % 126;
    output[c] += 49;
    output[c] = output[c] == 127 ? 1 : output[c];
  }
}