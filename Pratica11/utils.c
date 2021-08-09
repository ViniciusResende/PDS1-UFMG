#include "utils.h"
#define INFINITY 2000000000

void switchBetween(int array[], int i, int j) {
  int aux;
  aux = array[i];
  array[i] = array[j];
  array[j] = aux;
}

void orderBySelection(int x[], int n) {
  int minor, position;
  int i, k = 0;
  while (k < n)
  {
    minor = INFINITY;
    for(i = k; i < n; i++) {
      if (x[i] < minor)
      {
        minor = x[i];
        position = i;
      }
    }
    switchBetween(x, k, position);
    k++;
  }
  
}

int rightComparationValue(int currentCard[], int comparedCard[], int n) {
  int rightComparations = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(currentCard[i] == comparedCard[j]){
        rightComparations++;
        break;
      }
    }
  }  
  return rightComparations;
}