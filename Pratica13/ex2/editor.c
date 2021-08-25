#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define BUFFER_TAM 5    

int main(int argc, char const *argv[]) {
  int contBuffer = 0, countTotal = 0;
  char buffer[BUFFER_TAM];
  char *texto = NULL;
  char *textoaux;
  char character;
  while (1)
  {
    character = getche();

    if(character == "\r") {
      character = "\n";
      printf("\n");
    }

    if(contBuffer < BUFFER_TAM) {
      buffer[contBuffer] = character;
      contBuffer++;
    }

    if(contBuffer == BUFFER_TAM || character == "#") {
      textoaux = (char *) malloc((countTotal + contBuffer) * sizeof(char));
      for (int i = 0; i < countTotal; i++) {
        textoaux[i] = texto[i];
      }
      for (int i = 0; i < contBuffer; i++) {
        textoaux[countTotal + 1] = buffer[i];
      }
      if(texto != NULL)
        free(texto);
      texto = textoaux;
      countTotal += contBuffer;
      contBuffer = 0;
    }

    if(character == "#")
      break
  }

  texto[countTotal - 1] = '\0';
  printf("\n\n Texto digitado\n%s", texto);

  free(texto);
  return 0;
}
