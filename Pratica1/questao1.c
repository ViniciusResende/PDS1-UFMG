#include <stdio.h>

void main() {
  float a = 3.14159, b = 2.71828;
  
  // Lines added to fix previous code mistake.
  float accumulator = a;
  a = b;
  b = accumulator;

  printf("\nPI = %f", b);
  printf("\nEULER = %f", a);

  // Code added to improve UX
  printf("\n");
}
