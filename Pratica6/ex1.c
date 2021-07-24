#include<stdio.h>

unsigned long long calculateFactorial(int number) {
  int i;
  unsigned long long accumulator = 1;
  for (i = 1; i <= number; i++){
    accumulator *= i;
  }
  return accumulator;
}

int main(int argc, char **argv) {
  int i = 1; 
  float constant = 0.000001;
  float factorial = 1, operator = 1, euler = 1;

  while (operator > constant)
  {
    factorial = calculateFactorial(i);

    operator = 1/factorial;

    euler += operator;
    i++;
  }
  
  printf("Euler : %f\n", euler);

  return 0;
}