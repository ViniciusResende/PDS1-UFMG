#include <stdio.h>
#include "pratica4.h"

int main(int argc, char **argv) {
  printf("It should convert value 72(km/h) to 20(m/s)\n");
  printf("--> %f\n", paraMetrosPorSegundo(72));

  printf("It should return the area of a cicle with 5 of radius (aprox: 78.5)\n");
  printf("--> %f\n", areaCirculo(5));

  printf("It should return greater number between 10, 5, 8\n");
  printf("--> %d\n", maior3(10, 5, 8));

  printf("It should return 1 to even number 4\n");
  printf("--> %d\n", ehPar(4));

  printf("It should return 0 to number 15 that is divisable by 3 AND 5\n");
  printf("--> %d\n", ehDivisivelPor3ou5(15));

  printf("It should return 120 as answer to the factorial of 5\n");
  printf("--> %f\n", fatorial(5));

  printf("It should return 83 as answer to the function somaNumerosDiv3ou5 with parameter 20\n");
  printf("--> %d\n", somaNumerosDiv3ou5(20));

  printf("It should return 8 as answer to divisors quantity of 66\n");
  printf("--> %d\n", numeroDivisores(66));

  printf("It should return 13 as answer to the 8th number in the Fibonacci sequence\n");
  printf("--> %d\n", enesimoFibonacci(8));
  return 0;
}