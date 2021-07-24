#include<stdio.h>

void calcLenght(char string[128]) {
  int i, accumulator = 0;

  for (i = 0; i <= 128; i++) {
    if(string[i] != '\0'){      
      accumulator +=1;
    } else {
      printf("%d \n", accumulator - 1);
      break;
    }
  }

}

int main(int argc, char **argv) {
  char string[128];
  printf("digite uma linha:\n");
  fgets(string, 128, stdin);

  calcLenght(string);

  return 0;
}