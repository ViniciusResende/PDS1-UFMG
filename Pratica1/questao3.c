#include<stdio.h>

void mesureIMCAndReturnRecommendation(float weight, float height, float IMC, char name[20]) {
  float idealWeight;

  if( IMC > 18.5) {
    if(IMC < 25) {
      printf("\nPeso atual está dentro da faixa saudável");
    } else {
      idealWeight = 25*(height*height);
      printf("\nO IMC de %s é %.2f, %s precisa reduzir seu peso em %.0f kilos", name, IMC, name, (weight - idealWeight));
    }
  } else {
    idealWeight = 18.5*(height*height);
    printf("\nO IMC de %s é %.2f, %s precisa aumentar seu peso em %.0f kilos", name, IMC, name, (idealWeight - weight));
  }
}

int main(int argc, char **argv) {
  float IMC, weight, height;
  char name1[12] = "Olívia", name2[12] = "Brutus";

  // Verifies if username was passed.
  if(argv[1]){
    printf("Usuário = %s", argv[1]);
  } else {
    printf("Usuário não especificado.");
  }

  // Olívia:
  weight = 45;
  height = 1.76;
  IMC = weight/(height*height);

  mesureIMCAndReturnRecommendation(weight, height, IMC, name1);
  
  // Brutus:
  weight = 122;
  height = 1.84;
  IMC = weight/(height*height);

  mesureIMCAndReturnRecommendation(weight, height, IMC, name2);
  
  printf("\n");

  return 0;
}