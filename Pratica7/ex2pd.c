#include <stdio.h>

#define TAM_MAX 1000

int main(int argc, char const *argv[]) {
  int fib;
  double sequence[TAM_MAX];
  double actual;

  for (int i = 0; i < TAM_MAX; i++)
    sequence[i] = -1.0;
  sequence[0] = 1;
  sequence[1] = 1;
  int count = 1002;
  do {
    printf("\nDigite o valor de x tal que fib(x) representa a sequencia de fibonacci: ");
    scanf("%d", &fib);
    actual = sequence[fib];
    if(fib >= 0 && fib <= TAM_MAX) {
      if(actual == -1.0) {
        int initial = fib;
        while(actual == -1) {
          initial--;
          actual = sequence[initial];
        }
        initial ++;
        for(int i = initial; i <= fib; i++) {
          sequence[i] = sequence[i-1] + sequence[i-2];
          count ++;
        }
      }
      printf("fib(%d) = %4.3e", fib, sequence[fib]);
    } else
      printf("Fim da execucao.");
  } while (fib >= 0 && fib <= TAM_MAX);
  printf("\n%d atribuicoes\n", count);
  
  return 0;
}