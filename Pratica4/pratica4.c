#include <math.h>
#include "pratica4.h"
#include <stdio.h>

void clearStdin(void)
{
  // I use linux, so I preferred to do my own clear stdin func
  int c;
  do {
    c = getchar();
  } while (c != '\n' && c != EOF);
}

float paraMetrosPorSegundo(float v){ 
  float constant = 3.6;
  
  return v/constant;
}

float areaCirculo(float raio) {
  return M_PI*(pow(raio, 2));
}

int maior3(int n1, int n2, int n3) {
  int biggestNumber = n1;

  if(n2 > biggestNumber){
    biggestNumber = n2;
  } else if(n3 > biggestNumber){
    biggestNumber = n3;
  }

  return biggestNumber;
}

int ehPar(int n) {
  return (n % 2 == 0) ? 1 : 0;
}

int ehDivisivelPor3ou5(int n) {
  int firstCheck = (n % 3 == 0 || n % 5 == 0) ? 1 : 0;
  int secondCheck = ((n % 3 == 0 && n % 5 == 0)) ? 1 : 0;

  return (firstCheck && !secondCheck) ? 1 : 0;
}

float pesoIdeal(float h, char sexo) {
  return (sexo == 'M') ? ((72.7 * h) - 58) : ((62.1 * h) - 44.7);
}

double fatorial(int N) {
  double accumulator = N;

  while(N > 1){
    N--;
    accumulator += accumulator * (N - 1);
  }

  return accumulator;
}

int somaNumerosDiv3ou5(int N){
  int accumulator = 0;

  while(N > 0){
    if(ehDivisivelPor3ou5(N)){
      accumulator += N;
    }
    N--;
  }

  return accumulator;
}

// calculaMedia statements
float geometricAverage(int x, int y, int z) {
  return cbrt(x*y*z);
}

float weightedAverage(int x, int y, int z) {
  return ((x + 2) * (y + 3) * z)/6;
}

float harmonicAverage(int x, int y, int z) {
  return 3/(1/(x+1)/(y+1)/z);
}

float aritmeticAverage(int x, int y, int z) {
  return (x+y+z)/3;
}

float calculaMedia(int x, int y, int z, int operacao) {
  float answer;  
  switch (operacao)
  {
    case 1:
      answer = geometricAverage(x, y, z);
    break;

    case 2:
      answer = weightedAverage(x, y, z);
    break;

    case 3:
      answer = harmonicAverage(x, y, z);
    break;

    case 4:
      answer = aritmeticAverage(x, y, z);
    break;
  
    default:
      answer = 0;
    break;
  }  
}

int numeroDivisores(int N){
  int accumulator = 0, i = N;
  while(i > 0){
    if(N % i == 0){
      accumulator++;
    }
    i--;
  }
  return accumulator;
}

int enesimoFibonacci(int N) {
  unsigned int fibonacciNumber = 1, fibonacciPrevious = 0, previousHandler = 0;
  while(N > 2){
    previousHandler = fibonacciNumber;
    fibonacciNumber = fibonacciNumber + fibonacciPrevious;
    fibonacciPrevious = previousHandler;
    N--;
  } 

  return fibonacciNumber;
}

int mdc(unsigned int x, unsigned int y) {
  unsigned int greaterNumber = (x > y) ? x : y, shorterNumber = (x > y) ? y : x;
  int i = greaterNumber;
  while(i > 0){
    if(greaterNumber % i == 0){
      if(shorterNumber % i == 0){
        return i;
      }
    }
    i--;
  }
}

int mmc(unsigned int x, unsigned int y) {
  unsigned int greaterNumber = (x > y) ? x : y, shorterNumber = (x > y) ? y : x;
  int aux, i = 2;
  while(i <= greaterNumber) {
    aux = shorterNumber * i;
    if((aux % greaterNumber) == 0) {
      return aux;
    }
    i++;
  }
}