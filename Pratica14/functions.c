#include <math.h>
#include <stdio.h>
#include "functions.h"

int power3Sum(int n) {
  if(n == 1)
    return 1;
  else
    return pow(n, 3) + power3Sum(n-1);
}

void printNaturalNumbersCresc(int n) {
  if(n == 0) 
    printf("%d ", n);
  else {
    printNaturalNumbersCresc(n-1);
    printf("%d ", n);
  }
}

void printNaturalNumbersDesc(int n) {
  if(n == 0) 
    printf("%d ", n);
  else {
    printf("%d ", n);
    printNaturalNumbersDesc(n-1);
  }
}

int sumArray(int *array, int n) {
  if(n - 1 == 0)
    return array[0];
  else
    return array[n-1] + sumArray(array, n-1);
}

float arrayAverage(int *array, int index, int n) {
  if(index == n - 1)
    return (float)array[index] / (float)n;
  else
    return (float)array[index] / (float)n + arrayAverage(array, index+1, n);
}

int powValue(int x, int y) {
  if  (y == 0)
    return 1;
  else
    return x * powValue(x, y-1);
}

void printInvertedString(char *string) {
  if(*string != '\0') {
    printInvertedString(string+1);
    printf("%c", *string);
  }
}

int switchedNaturalNumber(int num, int *sum) {
  int remainingValue;
  if(num != 0) {
    remainingValue = num % 10;
    *sum *= 10;
    *sum += remainingValue;
    switchedNaturalNumber(num/10, sum);
    return *sum;
  }
}

void printNumberToBit(int num) {
  int bit;
  if(num < 2) {
    bit = num;
  } else {
    printNumberToBit(num / 2);
    if(num%2) 
      bit = 1;
    else 
      bit = 0;
  }
  
  printf("%d", bit);
}

int lowerValueInArray(int *array, int n) {
  int currentValue = array[n-1];
  int lowerValue;
  if(n-1 == 0)
    return currentValue;
  else {
    lowerValue = lowerValueInArray(array, n-1);
    return lowerValue <= currentValue ? lowerValue : currentValue;
  }
  
}