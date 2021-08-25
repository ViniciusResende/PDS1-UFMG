#include <stdio.h>
#include <stdlib.h>

void matrixMalloc(float ***matrix, int n, float initialValue) {
  *matrix = (float **) malloc(n * sizeof(float *));
  for (int i = 0; i < n; i++) {
    (*matrix)[i] = (float *) malloc(n * sizeof(float));
    for (int j = 0; j < n; j++) 
      (*matrix)[i][j] = initialValue;
  }
}

void printMatrix(float ***matrix, int n) {
  printf("\nMatrix: \n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) 
      printf("%.1f ", (*matrix)[i][j]);
    printf("\n");
  }
}

void freeMatrix(float ***matrix, int n) {
  for (int i = 0; i < n; i++)
    free((*matrix)[i]);
  free(*matrix);
}

int main(int argc, char const *argv[])
{
  float **matrix;
  int n;
  printf("\nType the matrix dimension: ");
  scanf("%d", &n);

  matrixMalloc(&matrix, n, 0.0);

  printMatrix(&matrix, n);

  freeMatrix(&matrix, n);
  return 0;
}
