#include <stdio.h>
#include "functions.h"

int main(int argc, char const *argv[])
{
  printf("\nTest\n");

  printf("\n---Testing power3Sum ---\n");
  printf("Sum power to 3 from 1: %d\n", power3Sum(1));
  printf("Sum power to 3 from 3: %d\n", power3Sum(3));
  printf("Sum power to 3 from 10: %d\n", power3Sum(10));

  printf("\n---Testing printNaturalNumbersCresc ---\n");
  printf("Natural numbers in crescent order from 1: ");
  printNaturalNumbersCresc(1);
  printf("\n");
  printf("Natural numbers in crescent order from 3: ");
  printNaturalNumbersCresc(3);
  printf("\n");
  printf("Natural numbers in crescent order from 10: ");
  printNaturalNumbersCresc(10);
  printf("\n");

  printf("\n---Testing printNaturalNumbersDesc ---\n");
  printf("Natural numbers in decreasing order from 1: ");
  printNaturalNumbersDesc(1);
  printf("\n");
  printf("Natural numbers in decreasing order from 3: ");
  printNaturalNumbersDesc(3);
  printf("\n");
  printf("Natural numbers in decreasing order from 10: ");
  printNaturalNumbersDesc(10);
  printf("\n");

  int a[1] = {1};
  int b[2] = {2, 3};
  int c[10] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

  printf("\n---Testing sumArray ---\n");
  printf("Sum of the element of array: a: %d\n", sumArray(a, 1));
  printf("Sum of the element of array: b: %d\n", sumArray(b, 2));
  printf("Sum of the element of array: c: %d\n", sumArray(c, 10));

  printf("\n---Testing arrayAverage ---\n");
  printf("Average of the element of array: a: %.2f\n", arrayAverage(a, 0, 1));
  printf("Average of the element of array: b: %.2f\n", arrayAverage(b, 0, 2));
  printf("Average of the element of array: c: %.2f\n", arrayAverage(c, 0, 10));

  printf("\n---Testing powValue ---\n");
  printf("2 powered to 5: %d\n", powValue(2, 5));
  printf("3 powered to 3: %d\n", powValue(3, 3));
  printf("10 powered to 2: %d\n", powValue(10, 2));

  char str1[10] = "Hello";
  char str2[10] = "World";
  char str3[15] = "gnirtSdetrevnI";
  printf("\n---Testing printInvertedString ---\n");
  printf("Inverted string of %s is: \n", str1);
  printInvertedString(str1);
  printf("\n");
  printf("Inverted string of %s is: \n", str2);
  printInvertedString(str2);
  printf("\n");
  printf("Inverted string of %s is: \n", str3);
  printInvertedString(str3);
  printf("\n");

  int result = 0;
  printf("\n---Testing switchedNaturalNumber ---\n");
  printf("The inverted number of 123 is: %d\n", switchedNaturalNumber(123, &result));
  result = 0;
  printf("The inverted number of 456 is: %d\n", switchedNaturalNumber(456, &result));
  result = 0;
  printf("The inverted number of 789 is: %d\n", switchedNaturalNumber(789, &result));
  result = 0;

  printf("\n---Testing printNumberToBit ---\n");
  printf("\n10 represented in bit is:\n");
  printNumberToBit(10);
  printf("\n27 represented in bit is:\n");
  printNumberToBit(27);
  printf("\n12 represented in bit is:\n");
  printNumberToBit(12);
  printf("\n");

  printf("\n---Testing lowerValueInArray ---\n");
  printf("Lower value in array a is: %d\n", lowerValueInArray(a, 1));
  printf("Lower value in array b is: %d\n", lowerValueInArray(b, 2));
  printf("Lower value in array c is: %d\n", lowerValueInArray(c, 10));

  return 0;
}
