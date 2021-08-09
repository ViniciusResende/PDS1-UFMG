#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Xis {
    int linha, coluna, tam;
} Xis;


typedef struct Ponto {
    float x, y;
} Ponto;


typedef struct Circulo {
    Ponto centro;
    float raio;
} Circulo;

typedef struct Triangulo {
    Ponto sup, base_esq, base_dir;
} Triangulo;


#define MAX_TAM 100

//1)

void matrizIdentidade(int M[][MAX_TAM], int n) {
  if(n<=0 || n>=MAX_TAM)
    return;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(i !== j){
        M[i][j] = 0;
      } else {
        M[i][j] = 1;
      }
    }
  }
}


//2)

int isPossibleToInsertX(int n, Xis x) {
  if(x.tam <= 0) {
    return 0;
  }

  if(x.coluna + (x.tam)/2 > n || x.linha + (x.tam)/2 > n) {
    return 0;
  } else if(x.coluna - (x.tam)/2 <= 0 || x.linha - (x.tam)/2 <= 0){
    return 0;
  } else {
    return 1;
  }
}

int insereXis(int M[][MAX_TAM], int n, Xis x) {
  if(n<=0 || n>=MAX_TAM)
    return 0;
  if(!isPossibleToInsertX(n, x)) 
    return 0;
  
  if(x.tam == 1){
    M[x.linha][x.coluna] = 1;
    return 1; 
  }

  int yGap = x.linha - (x.tam - 1)/2;
  int xGap = x.coluna - (x.tam - 1)/2;

  for (int i = yGap; i < x.tam + yGap; i++) {
    for (int j = xGap; j < x.tam + xGap; j++) {
      M[i][j] = 0;
    }
  }

  for(int i = 0; i <= (x.tam - 1)/2; i++){
    M[x.linha + i][x.coluna + i] = 1;
    M[x.linha - i][x.coluna - i] = 1;
  }

  for(int i = 0; i <= (x.tam - 1)/2; i++){
    M[x.linha + i][x.coluna - i] = 1;
    M[x.linha - i][x.coluna + i] = 1;
  }

  return 1; 
}

//3)

int verifyX(int M[][MAX_TAM], int n, Xis xStart, Xis xEnd) {
  int verifyer = 1;

  int yLeftRight = xStart.coluna;
  int yRightLeft = xEnd.coluna;

  for(int i = xStart.linha; i <= xEnd.linha; i++){
    for(int j = xStart.coluna; j <= xEnd.coluna; j ++){
      if(j == yLeftRight || j == yRightLeft) {
        verifyer = M[i][j] == 0 ? 0 : 1;
      } else {
        verifyer = M[i][j] != 0 ? 0 : 1;
      }
    }
    yRightLeft--;
    yLeftRight++;
  }

  return verifyer;
}

Xis maiorXis(int M[][MAX_TAM], int n, int i, int j) {
  Xis x, xStart, xEnd;

  xStart.tam = 0;
  xEnd.tam = 0;

  x.tam = 1;
  xStart.linha = i;
  xStart.coluna = j;
  xEnd.linha = i;
  xEnd.coluna = j;

  if(M[i][j] != 0) {
    while (verifyX(M, n, xStart, xEnd)) {
      x.tam += 2;
      //diagonaly up
      xStart.linha--;
      xStart.coluna--;
      //diagonaly down
      xEnd.linha++;
      xEnd.coluna++;
    }

    x.tam -= 2;
  } else {
    x.tam = 0;
  }

  x.linha = i;
  x.coluna = j;

  return x;
}

//4)

int lerXis(Xis *x, int n) {
  int count = 0;
  
  do {
    scanf("%d %d %d", 
      &x->linha, 
      &x->coluna, 
      &x->tam
    ); 
    count++;
  } while (!(isPossibleToInsertX(n, *x)));
  
  return count;
}

//5) 

int compareLetters(char a, char b) {
  if(a == b || a == b + 32 || a == b - 32)
    return 1;
  return 0;
}

int numCharsRepetidos(char str[]) {
  int counter = 0;
  int actualCounting;
  // char alreadyCounted[50] = {0};

  for (int i = 0; str[i]!='\0'; i++) {
    actualCounting = 0;
    if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {
      for (int j = 0; str[j]!='\0'; j++) {
        printf("%c ", str[i]);
        printf("%c", str[j]);
        printf("\n");
        if(compareLetters(str[i], str[j])) {
          actualCounting++;
          if(actualCounting == 2){
            counter++;
            // isAlreadyCounted = 0;

            // for (int i = 0; i < 50; i++) {
            //   if(str[i] == alreadyCounted[h]) {
            //     isAlreadyCounted = 1;
            //     break;
            //   }
            // }            

            // if(!isAlreadyCounted) {
            //   for (int i = 0; i < 50; i++) {
            //     if(alreadyCounted[i] == 0) {
            //       alreadyCounted[i] = str[i];
            //       break;
            //     }
            //   }              
            //}
          }   
        } 
      }
    }
  }

  return counter;
}

// 6

float getDistance(Ponto a, Ponto b) {
  return sqrt(pow(a.x-b.x, 2) + pow(a.y-b.y, 2));
} 

int estaContidoCirculoTriangulo(Circulo cir, Triangulo tri) {
  int isAllPointInside = 1;

  if(!(getDistance(cir.centro, tri.sup) <= cir.raio)){
    isAllPointInside = 0;
  }

  if(!(getDistance(cir.centro, tri.base_dir) <= cir.raio)){
    isAllPointInside = 0;
  }

  if(!(getDistance(cir.centro, tri.base_esq) <= cir.raio)){
    isAllPointInside = 0;
  }

  return isAllPointInside;
}

// 0

void minha_main() {
    //Voce pode simular uma funcao main nesta funcao. Use-a para testar o que quiser. 
    //Para isso, execute a sua prova e entre com o exercicio 0.
    //Isso fara com que esta funcao (minha_main) seja chamada pelo VPL.
    //Importante: esta funcao NAO sera avaliada!!! No entanto, erros de compilacao nesta funcao invalidam (nota 0!) TODA a prova!
    
    printf("\nPor enquanto nao estou fazendo nada :(");
    
}

