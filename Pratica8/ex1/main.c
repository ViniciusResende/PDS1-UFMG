#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define MAX_SIZE 100

int main(int argc, char const *argv[]) {
  int matrix[MAX_SIZE][MAX_SIZE];
  int m, n, k;
  int zeros = 0, compareZeros;
  do {
    printf("\nType n and m respectively that represents the matrix dimensions(until 100): ");
    scanf("%d %d", &n, &m);
    if(m < 0 || m > MAX_SIZE || n < 0 || n > MAX_SIZE)
      printf("Invalid dimension for matrix.");
  } while (m < 0 || m > MAX_SIZE || n < 0 || n > MAX_SIZE);

  do {
    printf("\nType the k value(min value is two): ");
    scanf("%d", &k);
    if( k < 2)
      printf("Invalid value.");
  } while(k < 2);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      matrix[i][j] = (rand() % k) + 1;
    }
  }

  printf("\nFilled Matrix:");
  printMatrix(matrix, n, m);
  
  while(1) {
    compareZeros = zeros;

    resetThreeConsecutive(matrix, n, m);
    zeros = countZeros(matrix, n, m);

    if(compareZeros == zeros)
      break;
    relocateZeros(matrix, n, m);
  }
  
  printf("\nFinal Matrix:");
  printMatrix(matrix, n, m);

  printf("\nNumber of zeros: %d\n", zeros);

  
  return 0;
}