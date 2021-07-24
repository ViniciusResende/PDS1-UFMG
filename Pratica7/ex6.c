#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 60

int main(int argc, char const *argv[]) {
  int X[ARRAY_SIZE], Y[ARRAY_SIZE], unionArr[2*ARRAY_SIZE];
  int actualSize = 0, found = 0;
  int number;

  for (int i = 0; i < ARRAY_SIZE; i++) {
    do {
      X[i] = rand();
    } while (X[i] < 0 || X[i] > 365);
    do {
      Y[i] = rand();
    } while (Y[i] < 0 || Y[i] > 365);
  }

  for (int i = 0; i < ARRAY_SIZE; i++) {
    number = X[i];
    found = 0;
    for (int j = 0; j < actualSize; j++) {
      if(number == unionArr[j]) {
        found = 1;
        break;
      }
    }
    if(!found) {
      unionArr[actualSize] = number;
      actualSize++;
    }
    // ----------------
    number = Y[i];
    found = 0;
    for (int j = 0; j < actualSize; j++) {
      if(number == unionArr[j]) {
        found = 1;
        break;
      }
    }
    if(!found) {
      unionArr[actualSize] = number;
      actualSize++;
    }
  }
  printf("\nVetor Uniao\n");
  for (int i = 0; i < actualSize; i++) {
    printf("unionArr[%d] = %d\n", i, unionArr[i]);
  }
  
  

  return 0;
}