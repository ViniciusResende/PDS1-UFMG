#include<stdio.h>

void lowerToUpper(char string[100]) {
  int i;

  for (i = 0; string[i]!='\0'; i++) {
    if(string[i] >= 'a' && string[i] <= 'z') {
      string[i] = string[i] - 32;
    }
   }

  printf("\n%s", string);
}

int main(int argc, char **argv) {
  char string[100];
  printf("digite uma linha:\n");
  fgets(string, 100, stdin);

  lowerToUpper(string);

  return 0;
}