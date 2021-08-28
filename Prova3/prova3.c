#include <stdio.h>
#include <stdlib.h>
#include "prova3.h"

// 1
float somaSaldo(char nome_arquivo[], int filial, int ini, int fim) {
  int i, currentDay = 1;
  int filialNumber = 5;
  float currentValue, sum = 0;
  int initialLine = ini < 1 ? 1 : ini;
  int finalLine = fim+1;

  FILE *arq;
  arq = fopen(nome_arquivo, "r");

  if(!arq) 
    return 0;
  
  if(filial <= 0 || filial > filialNumber) 
    return 0;
  
  if(fim < ini) 
    return 0;


  while (feof(arq) == 0) {   
    for (i = 0; i < filialNumber; i++) {
      fscanf(arq, "%f ", &currentValue);
      
      if (currentDay >= initialLine) {
        if(i + 1 == filial) 
          sum += currentValue;
      }

      // line ended
      if(i == filialNumber - 1)
        currentDay++;
    }
    
    if (currentDay == finalLine || feof(arq))
      return sum;
  }

  fclose(arq);
  return -1;
}

// 2
float** carregaLista(char nome_arquivo[]) {
  int i, j, numOfMonths;
  char month[9];
  int year, columns;

  FILE *arq;
  arq = fopen(nome_arquivo, "r");

  if(!arq)
    return NULL;

  fscanf(arq, "%d", &numOfMonths);
  float **Matrix = (float**) malloc ((numOfMonths+1) * sizeof (float*));
  for (i = 0; i < numOfMonths; i++) {
    fscanf(arq, "%s %d %d", month, &year, &columns);
    Matrix[i] = (float *) malloc ((columns+1) * sizeof (float));

    for (j = 0; j < columns; j++) 
      fscanf(arq, " %f", &Matrix[i][j]);
    
    Matrix[i][columns+1] = 0.0;
  }
  

  Matrix[numOfMonths+1] = NULL;

  fclose(arq);
  return Matrix;
}

float sumLine (float *gastos) {
  if(*gastos < 0)
    return -1;

  if(*gastos == 0)
    return 0;
  else
    return sumLine(gastos + 1) + *gastos;
}

float handleNewLine (float **gastos, float greaterValue) {
  if(*gastos == NULL)
    return greaterValue;
  else {
    float currentValue = sumLine(*gastos);

    if(currentValue < 0) 
      return 0;

    if(greaterValue < currentValue) {
      greaterValue = currentValue;
    }
    handleNewLine(gastos+1, greaterValue);
  }
}

// 3
float maiorGasto(float **gastos) {
  float greaterValue = -1.0;

  return handleNewLine(gastos, greaterValue); 
}


// 4
//não altere este struct!
// typedef struct Empresa {
//   float juros;
//   float taxa;
// }Empresa;

float valorTotalEmprestimo(float valor, int m, Empresa empresa) {
  if(valor <= 0)
    return 0;
  if (m < 0)
    return 0;
  if(empresa.juros <= 0 || empresa.taxa <= 0)
    return 0;

  if(m == 0)
    return valor + empresa.taxa;
  else 
    return (1 + empresa.juros) * valorTotalEmprestimo(valor, m-1, empresa);

  return -1;
}

// 5
int diferencaChaves(char *programa) {
  if(*programa != '\0') {
    if(*programa == '{')
      return diferencaChaves(programa+1) + 1;
    if(*programa == '}')
      return diferencaChaves(programa+1) - 1;
    return diferencaChaves(programa+1);
  } else
    return 0;
}
// Para testes
int minha_main()
{
    return -1;
}