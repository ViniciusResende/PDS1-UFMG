#include<stdio.h>

int main(int argc, char **argv) {
  char initalCPF[9], veryfiedCPF[11];
  int i = 1;
  int sumAccumulator = 0;
  printf("Entre com o CPF a ser verificado(9 primeiros números):");
  scanf("%s", initalCPF);

  while( i <= 9){
    if(i%3 == 0){
      sumAccumulator = sumAccumulator + (int)initalCPF[i]*2;
    } else if(i == 2 || i == 5 || i == 8){
      sumAccumulator = sumAccumulator + (int)initalCPF[i]*3;
    } else {
      sumAccumulator = sumAccumulator + (int)initalCPF[i]*4;
    }

    i++;
  }
  
  printf("%d" , sumAccumulator);

  return 0;
}