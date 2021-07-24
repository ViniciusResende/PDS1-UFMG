#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 1000
#define NUM_QUANTITY 5000000

int main(int argc, char const *argv[]) {
  int arrayQuantity[ARRAY_SIZE];
  int number, greater, smaller;

  for (int i = 0; i < ARRAY_SIZE; i++)
    arrayQuantity[i] = 0;

  for (int i = 0; i < NUM_QUANTITY; i++) {
    do {
      number = rand();
    } while (number < 0 || number > ARRAY_SIZE -1);
    arrayQuantity[number]++;
  }
  greater = arrayQuantity[0];
  smaller = arrayQuantity[0];

  for (int i = 0; i < ARRAY_SIZE; i++) {
    if(arrayQuantity[i] >= greater)
      greater = arrayQuantity[i];
    if(arrayQuantity[i] <=smaller)
      smaller = arrayQuantity[i];
  }
  printf("\n Diferenca: %d\n", greater - smaller);
  

  return 0;
}