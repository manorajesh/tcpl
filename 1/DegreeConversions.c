#include <stdio.h>

int main() {
  /*float fahr, cel;
  int STEP, UPPER, LOWER;

  STEP = 20;
  UPPER = 300;
  LOWER = 0;

  printf("Fahrenheit \t Celsius\n");

  fahr = LOWER;
  while(fahr <= UPPER) {
    cel = (5.0/9.0) * (fahr - 32.0);
    printf("\n %3.0f \t | \t %6.1f\n", fahr, cel);
    printf("_____________________ \n");
    fahr = fahr + STEP;
  }
  printf("\n \n");

  printf("Celsius \t Fahrenheit\n");

  cel = LOWER;
  while(cel <= UPPER) {
    fahr = (9.0/5.0) * (cel + 32.0);
    printf("\n %3.0f \t | \t %6.1f\n", cel, fahr);
    printf("_____________________ \n");
    cel = cel + STEP;
  }
  */
  
  #define LOWER 0
  #define UPPER 300
  #define STEP 20

  int fa;

  for(fa = UPPER; fa >= LOWER; fa = fa - STEP)
    printf("%3d \t %6.1f \n", fa, (5.0/9.0) * (fa-32));

}

