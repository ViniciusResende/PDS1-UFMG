#include<stdio.h>

int calcLenght(char string[500]) {
  int i, accumulator = 0;

  for (i = 0; i <= 500; i++) {
    if(string[i] != '\0'){      
      accumulator +=1;
    } else {
      return accumulator - 1;
      break;
    }
  }
}

void inverseText(char string[500]) {
  int i, stringLenght = calcLenght(string);
  int j = stringLenght - 1;
  char inverseString[stringLenght];

  for (i = 0; i < stringLenght ; i++) {
    inverseString[i] = string[j];
    
    j--;
  }

  printf("%s\n", inverseString);
}

int main(int argc, char **argv) {
  char character, string[500];
  int i = 0;
  printf("digite um texto:\n");
  do
  {
    character = getc(stdin);
    string[i] = character;
    i++;
  } while (character != '.');
  

  inverseText(string);

  return 0;
}