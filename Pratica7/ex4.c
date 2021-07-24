#include <stdio.h>

int main(int argc, char const *argv[]) {
  int X[10], Y[10], Z[20];
  int countX = 0, countY = 0;
  printf("\nDigite os 10 valores de X com espaços entre os valores(Ex: 1 2 3 .. 10): ");
  for (int i = 0; i < 10; i++) 
    scanf("%d", &X[i]);
    printf("\nDigite os 10 valores de Y com espaços entre os valores(Ex: 1 2 3 .. 10): ");
  for (int i = 0; i < 10; i++) 
    scanf("%d", &Y[i]);

  for (int i = 0; i < 20; i++) {
    if( i % 2 == 0) {
        Z[i] = X[countX];
        countX++;
    } else {
      Z[i] = Y[countY];
        countY++;
    }
  }
  printf("[");
  for (int i = 0; i < 20; i++){
    printf("%d, ", Z[i]);
  }
  printf("]\n");
  

  return 0;
}