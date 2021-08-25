#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  float **matrix;
  int n;
  printf("\nType the matrix dimension: ");
  scanf("%d", &n);

  matrix = (float **) malloc(n * sizeof(float *));
  for (int i = 0; i < n; i++) {
    matrix[i] = (float *) malloc(n * sizeof(float));
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matrix[i][j] = 0.0;
    }
  }
  printf("\nMatrix: \n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) 
      printf("%.1f ", matrix[i][j]);
    printf("\n");
  }
  

  for (int i = 0; i < n; i++)
    free(matrix[i]);
  free(matrix);
  return 0;
}
