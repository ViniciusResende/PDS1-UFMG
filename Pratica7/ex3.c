#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 1000

double arrayAverage(int array[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += array[i];
  
  return (double)sum / (double)n;
}

void fillArray(int *array, int n) {
  for (int i = 0; i < n; i++)
  {
    //*(array+i) = rand();
    array[i] = rand(); 
  }
  
}

int main(int argc, char const *argv[]) {
  int array[TAM_MAX];
  double average;
  int n;

  do {
    if(n < 0 || n > TAM_MAX) 
      printf("Tamanho inválido.\n");
    printf("\nDigite o tamanho do vetor(ate 1000): ");
    scanf("%d", &n);
  } while (n < 0 || n > TAM_MAX);

  fillArray(array, n);
  average = arrayAverage(array, n);

  printf("Media: %.2lf\n", average);

  return 0;
}