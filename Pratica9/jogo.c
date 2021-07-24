#include <stdio.h>
#include <stdlib.h>
#include "jogo.h"

int count_id = 1;

int rolaDados() {
  int soma = 0;
  for (int i = 0; i < 3; i++) {
    soma += (rand() % 6) + 1; 
  }
  return soma;
}

void criaGuerreiro(Guerreiro *warrior) {
  int vida = 0;
  warrior->ataque = rolaDados();
  warrior->defesa = rolaDados();
  warrior->carisma = rolaDados();

  for (int i = 0; i < 3; i++) {
    vida += rolaDados();
  }
  
  warrior->pontos_vida = vida;
  // remover a atribuição para id guerreiro
  warrior->id_guerreiro = count_id;
  count_id++;
}

int bonusCarisma(int carisma) {
  int bonus;

  switch (carisma)
  {
    case 18:
      bonus = 3;
      break;
    case 16 ... 17:
      bonus = 2;
      break;
    case 14 ... 15:
      bonus = 1;
      break;
    case 6 ... 7:
      bonus = -1;
      break;
    case 4 ... 5:
      bonus = -2;
      break;
    case 3:
      bonus = -3;
      break;
    default:
      bonus = 0;
      break;
  }

  return bonus;
}

void ataca(Guerreiro *striker, Guerreiro *defender) {
  int dano, golpe, escudo;
  golpe = rolaDados() + striker->ataque + bonusCarisma(striker->carisma);
  escudo = rolaDados() + defender->defesa + bonusCarisma(defender->carisma);
  dano = golpe - escudo;

  if(dano > 0) {
    defender->pontos_vida -= dano;
  }
}