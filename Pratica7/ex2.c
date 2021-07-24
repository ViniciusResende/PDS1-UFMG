#include <stdio.h>

#define TAM_MAX 1000

int main(int argc, char const *argv[]){

  int fib;
  double sequence[TAM_MAX];
  sequence[0] = 1;
  sequence[1] = 1;
  do {
    printf("\nDigite o valor de x tal que fib(x) representa a sequencia de fibonacci: ");
    scanf("%d", &fib);
    if(fib >= 0 && fib <= TAM_MAX) {
      for (int i = 2; i <= fib; i++)
      sequence[i] = sequence[i-1] + sequence[i-2]; 
      printf("Fib(%d) = %4.3e\n", fib, sequence[fib]);
    } else {
      printf("Fim da execucao.\n");
    }
  } while (fib >= 0 && fib <= TAM_MAX);
  

  return 0;
}