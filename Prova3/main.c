#include <stdio.h>
#include "prova3.h"

int main(int argc, char const *argv[]) {
  Empresa empresa;
  empresa.juros = 0.03;
  empresa.taxa = 10.0;
  printf("TEST QUESTÃO 1\n");
  printf("Questão 1 com filial 1, dia inicial 3, dia final 7\n");
  printf("response: %.2f\n", somaSaldo("saldo_franquias.txt", 1, 3, 7));
  printf("Deve retornar 392.28\n");
  printf("TEST QUESTÃO 1\n");
  printf("Questão 1 com filial 3, dia inicial 4, dia final 8\n");
  printf("response: %.2f\n", somaSaldo("saldo_franquias.txt", 3, 4, 8));
  printf("Deve retornar 61.36\n");
  printf("Questão 1 com filial 5, dia inicial 5, dia final 12\n");
  printf("response: %.2f\n", somaSaldo("saldo_franquias.txt", 5, 5, 12));
  printf("Deve retornar 575.12\n");
  printf("Questão 1 com filial 5, dia inicial 3, dia final 3\n");
  printf("response: %.2f\n", somaSaldo("saldo_franquias.txt", 5, 3, 3));
  printf("Deve retornar -32.20\n");
  printf("Questão 1 com filial 5, dia inicial 4, dia final 3\n");
  printf("response: %.2f\n", somaSaldo("saldo_franquias.txt", 5, 4, 3));
  printf("Deve retornar 0.00\n");

  printf("TEST QUESTÃO 2\n");
  printf("carregaLista response\n");
  carregaLista("teste.txt");

  printf("TEST QUESTÃO 3\n");
  printf("Questão 3 com matriz gerada por lista.txt\n");
  printf("response %.2f\n", maiorGasto(carregaLista("lista.txt")));
  printf("Deve retornar 836.44\n");
  printf("Questão 3 com matriz gerada por teste.txt\n");
  printf("response %.2f\n", maiorGasto(carregaLista("teste.txt")));
  printf("Deve retornar 19306.10\n");

  printf("valorTotalEmprestimo response: %.2f\n", valorTotalEmprestimo(763.0, 5, empresa));

  printf("diferencaChaves response: %d\n", diferencaChaves("{{ {}}}}"));
  return 0;
}
