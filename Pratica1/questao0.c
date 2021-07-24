#include<stdio.h>

int main(int argc, char **argv) {
  char name[20],
    authorName[20] = "Vinicius";

  printf("\nOlá meu nome é %s, e esse é ele em ASCII: ", authorName);

  int j = 0;
  while(authorName[j] != '\0') {
    printf("%d ", (int)authorName[j]);
    j++;
  }
  printf("\n");

  int i = 0;
  printf("Entre com um nome para verificar também: ");
  scanf("%s", name);
  printf("\n");

  while(name[i] != '\0') {
    printf("%d ", (int)name[i]);
    i++;
  }
  printf("\n");

  return 0;
}