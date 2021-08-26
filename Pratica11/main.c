#include <stdio.h>
#include "utils.h"

#define LINE_LENGHT 6

int main(int argc, char const *argv[]) {
  int cardIndex = 1, winningCards = 0, lostCards = 0, quina = 0, quadra = 0, rightComparations = 0;
  int currentCardData[LINE_LENGHT];
  int winningCardData[LINE_LENGHT] = {6 ,9, 22, 23, 48, 52};
  int lostCardData[LINE_LENGHT] = {4, 8, 15, 16, 23, 42};
  FILE *arq, *arq_aux;
  arq = fopen("cartelas.txt", "r");
  arq_aux = fopen("auxiliar.txt", "w");
  while (feof(arq) == 0)
  {
    rightComparations = 0;
    fprintf(arq_aux, "Order: ");
    for (int i = 0; i < LINE_LENGHT; i++) 
      fscanf(arq, "%d ", &currentCardData[i]);
    orderBySelection(currentCardData, LINE_LENGHT);
    for (int i = 0; i < LINE_LENGHT; i++)
      fprintf(arq_aux, "%d ", currentCardData[i]);
    fprintf(arq_aux, "\n");
    rightComparations = rightComparationValue(currentCardData, winningCardData, LINE_LENGHT);
    switch (rightComparations) {
      case 6:
        printf("\nA cartela %d contem os numeros premiados.\n", cardIndex);
        winningCards++;
        break;
      case 5:
        printf("\nA cartela %d acertou a quina.\n", cardIndex);
        quina++;
        break;
      case 4:
        quadra++;
        break;
      default:
        break;
    }
    rightComparations = rightComparationValue(currentCardData, lostCardData, LINE_LENGHT);
    if(rightComparations == 6){
      printf("\nA cartela %d contem os numeros premiados de lost.\n", cardIndex);
      lostCards++;
    }
    cardIndex++;
  }

  printf("\n\nSão %d cartelas vencedoras e %d cartelas de lost.\n", winningCards, lostCards);
  printf("O número de quinas acertadas foi de %d e de quadras foi de %d\n", quina, quadra);

  fclose(arq);
  fclose(arq_aux);
  return 0;
}
