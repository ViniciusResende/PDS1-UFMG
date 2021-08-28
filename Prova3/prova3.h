typedef struct Empresa {
  float juros;
  float taxa;
}Empresa;

float somaSaldo(char nome_arquivo[], int filial, int ini, int fim);
float** carregaLista(char nome_arquivo[]);
float maiorGasto(float **gastos);
float valorTotalEmprestimo(float valor, int m, Empresa empresa);
int diferencaChaves(char *programa);