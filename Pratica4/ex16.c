#include <stdio.h>
#include "pratica4.h"

int main(int argc, char **argv) {
  int x, y;
  
  printf("Please enter the first value: ");
  scanf("%d", &x);
  clearStdin();
  if(x < 0){
    do {
      printf("Invalid value entered, please enter the first value: ");
      scanf("%d", &x);
      clearStdin();
    }while(x < 0);
  }
  
  printf("Please enter the second value: ");
  scanf("%d", &y);
  clearStdin();
  if(y < 0){
    do {
      printf("Invalid value entered, please enter the second value: ");
      scanf("%d", &y);
      clearStdin();
    }while(y < 0);
  }

  printf("MDC %d\n", mdc(x, y));
  printf("MMC %d\n", mmc(x, y));
  return 0;
}