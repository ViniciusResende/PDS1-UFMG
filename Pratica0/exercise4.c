#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv) {
  char commandLine[10];

  printf("\n Arquivos com detalhes e especificações\n\n");
  // Attribute a script command line to a variable
  strcpy(commandLine, "ls -l" );
  // Runs the command script contained in the variable
  system(commandLine);

  printf("\n Nome dos arquivos\n\n");
  strcpy(commandLine, "ls" );
  system(commandLine);
  
  return 0;
}