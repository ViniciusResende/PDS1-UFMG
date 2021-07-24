#include<stdio.h>

int calcLenght(char string[100]) {
  int i, accumulator = 0;

  for (i = 0; i <= 100; i++) {
    if(string[i] != '\0'){      
      accumulator +=1;
    } else {
      return accumulator - 1;
      break;
    }
  }
}

void lowerToUpper(char string[100]) {
  int i, acc = 0;
  int stringLenght = calcLenght(string);

  for(i=0;i<stringLenght/2;i++)  
    {
    	if(string[i]==string[stringLenght-i-1])
    	  acc++;
 	  }

  if(acc == i) {
    printf("Palíndromo\n");
  } else {
    printf("Não palíndromo\n");
  }
}

int main(int argc, char **argv) {
  char string[100];
  printf("digite uma palavra:\n");
  fgets(string, 100, stdin);

  lowerToUpper(string);

  return 0;
}