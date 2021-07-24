#include<stdio.h>

void printPyramid(int number) {
  int i, j, accumulator = 0;

  for (i = 1; i <= number; i++) {
    for (j = 1; j <= i; j++) {
      accumulator++;
      printf("%d ", accumulator);
    }
    printf("\n");
  }
}

int main(int argc, char **argv) {
  int value; 
  
  scanf("%d", &value);

  printPyramid(value);

  return 0;
}