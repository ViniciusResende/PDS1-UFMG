#include <stdio.h>
#include "densityProbability.h"

int main(int argc, char **argv) {
  printf("%f\n", CauchyExpression(-2));
  printf("%f\n", GumbelExpression(0, 0.5, 2));
  printf("%f\n", LaplaceExpression(-6, -5, 4));
  
  return 0;
}