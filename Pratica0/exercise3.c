#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
  float x = 3.14,
    y = 4.13;

  // Search the reason why I couldn't pass variables x and y as parameters
  // Apparently the value that is passed as parameter is a rad value, not a degree one
  float sinX = sin(3.14), 
    sinY = sin(4.13);
  

  printf("\nO seno de %.2f é: %.4f\n", x, sinX);
  printf("\nO seno de %.2f é: %.4f\n", y, sinY);

  return 0;
}