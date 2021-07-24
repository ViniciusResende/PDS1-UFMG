#include <stdio.h>
#include "pratica4.h"

int main(int argc, char **argv) {
  char gender;
  float height, weight, idealWeight;
  
  printf("Please type M for male gender and F to female gender: ");
  scanf("%c", &gender);
  clearStdin();

  printf("Please type your height in meters: ");
  scanf("%f", &height);
  clearStdin();

  printf("Please type your weight in kilograms: ");
  scanf("%f", &weight);
  clearStdin();
  
  idealWeight = pesoIdeal(height, gender);

  if((weight - idealWeight) > 0){
    printf("You should loss %.2f kilogramns\n", (weight - idealWeight));
  } else {
    printf("You should gain %.2f kilogramns\n", (-(weight - idealWeight)));
  }

  return 0;
}