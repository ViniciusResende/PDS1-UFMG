#include <stdio.h>
#include "jogo.h"

void championshipStage(Guerreiro *stage[], Guerreiro *nextStage[], int stageSize) {
  Guerreiro *aux, *striker, *defender;
  int count = 0;

  for (int i = 0; i < stageSize; i+=2) {
    striker = stage[i];
    defender = stage[i+1];
    printf("\n Guerreiro %d x Guerreiro %d\n", striker->id_guerreiro, defender->id_guerreiro);
    while (1)
    {
      ataca(striker, defender);
      if(defender->pontos_vida <=0)
      break;
      aux = striker;
      striker = defender;
      defender = aux;
    }

    printf("\nId do guerreiro vencedor: %d", striker->id_guerreiro);
    printf("\nVida restante do guerreiro vencedor: %d\n", striker->pontos_vida);
    nextStage[count] = striker;
    count++;
  }
 
}

int main(int argc, char const *argv[])
{
  Guerreiro original[16], *oitavas[16], *quartas[8], *semi[4], *final[2];

  for (int i = 0; i < 16; i++) {
    criaGuerreiro(&original[i]);
    oitavas[i] = &original[i];
    printf("\nInformacoes do guerreiro: %d\n", original[i].id_guerreiro);
    printf("Id: %d\n", original[i].id_guerreiro);
    printf("Ataque: %d\n", original[i].ataque);
    printf("Defesa: %d\n", original[i].defesa);
    printf("Carisma: %d\n", original[i].carisma);
    printf("Vida: %d\n", original[i].pontos_vida);
    printf("\n");
  }
  printf("\nOitavas de final\n");
  championshipStage(oitavas, quartas, 16);

  printf("\nQuartas de final\n");
  championshipStage(quartas, semi, 8);

  printf("\nSemi-final\n");
  championshipStage(semi, final, 4);

  printf("\nFinal\n");
  championshipStage(final, oitavas, 2);

  return 0;
}
