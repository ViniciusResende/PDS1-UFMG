#include <stdio.h>

#define TAM_MAX 100

int main(int argc, char const *argv[]) {
  int X[TAM_MAX], Y[TAM_MAX];
  int n;

  do {
    if(n < 0 || n > TAM_MAX) 
      printf("Tamanho inválido.\n");
    printf("\nDigite o tamanho do vetor(ate 1000): ");
    scanf("%d", &n);
  } while (n < 0 || n > TAM_MAX);

  printf("Digite os %d elementos do vetor entre expacos(Ex 1 2 3 ... n): ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &X[i]);

  for (int i = 0; i < n; i++)
    Y[i] = X[n - 1 - i];
  
  printf("[");
  for (int i = 0; i < n; i++)
    printf("%d, ", Y[i]);
  printf("]\n");
  return 0;
}