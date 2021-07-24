#include <stdio.h>
#include "jogo.h"

int main(int argc, char const *argv[]) {
  Guerreiro a, b;
  Guerreiro *aux, *striker, *defender;
  criaGuerreiro(&a);
  a.id_guerreiro = 1;
  printf("\nInformacoes do guerreiro a\n");
  printf("Id: %d\n", a.id_guerreiro);
  printf("Ataque: %d\n", a.ataque);
  printf("Defesa: %d\n", a.defesa);
  printf("Carisma: %d\n", a.carisma);
  printf("Vida: %d\n", a.pontos_vida);
  printf("\n");

  criaGuerreiro(&b);
  printf("\nInformacoes do guerreiro b\n");
  printf("Id: %d\n", b.id_guerreiro);
  printf("Ataque: %d\n", b.ataque);
  printf("Defesa: %d\n", b.defesa);
  printf("Carisma: %d\n", b.carisma);
  printf("Vida: %d\n", b.pontos_vida);
  printf("\n");

  striker = &a;
  defender = &b;
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

  return 0;
}