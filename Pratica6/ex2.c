#include<stdio.h>

void printGrade(int number) {
  if(number >= 0 & number <= 4) {
    number = 4;
  } else if(number >= 9) {
    number = 9;
  }

  switch (number)
  {
    case 4:
      printf("F\n");
    break;

    case 5:
      printf("E\n");
    break;

    case 6:
      printf("D\n");
    break;

    case 7:
      printf("C\n");
    break;

    case 8:
      printf("B\n");
    break;

    case 9:
      printf("A\n");
    break;

    default:
      printf("Invalid entrance!");
  }
}

int main(int argc, char **argv) {
  int value; 
  
  scanf("%d", &value);

  printGrade(value);

  return 0;
}