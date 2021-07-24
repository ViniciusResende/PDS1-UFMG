#include<stdio.h>

int main(int argc, char **argv) {
  float accountBalance = 789.54;
  int month = 1;
  
  while (month < 4) {
    if(month == 2) {
      accountBalance = accountBalance + 303.2;
    }

    if(month == 3) {
      accountBalance = accountBalance - 58.25;
    }
    // Applies the monthly tax
    accountBalance = accountBalance*(100.56/100);

    // Increments the month value to the next month
    month ++;
  }

  printf("\n\033[31m Ao final do quarto mês, você possui R$%.2f em sua conta.\033[0m\n", accountBalance);
  
  return 0;
}