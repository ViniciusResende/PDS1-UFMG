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

void abbreviateName(char string[500]) {
  int i, stringLenght = calcLenght(string);
  int j = 0;
  char abbreviateString[stringLenght];

  for (i = 0; i < stringLenght ; i++) {
    if(!((string[i-1] >= 'A' && string[i-1] <= 'Z') || ((string[i-1] >= 'a' && string[i-1] <= 'z')))){
      if(string[i] >= 'a' && string[i] <= 'z') {
        abbreviateString[j] = string[i] - 32;
      } else {
        abbreviateString[j] = string[i];
      }
      abbreviateString[j+1] = '.';
      j += 2;
    }
  
  }

  printf("%s\n", abbreviateString);
}

int main(int argc, char **argv) {
  char character, string[500];
  int i = 0;
  printf("digite um nome:\n");
  do
  {
    character = getc(stdin);
    string[i] = character;
    i++;
  } while (character != '.');
  

  abbreviateName(string);

  return 0;
}