#include <stdio.h>
#include "utils.h"

void printMatrix(int Matrix[][MAX_SIZE], int n, int m) {
  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", Matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void resetThreeConsecutive(int Matrix[][MAX_SIZE], int n, int m) {
  int MatrixAlpha[MAX_SIZE][MAX_SIZE], MatrixBeta[MAX_SIZE][MAX_SIZE];
  int consecutive, previous;

  for (int i = 0; i < n; i++)
  {
    consecutive = 0;
    previous = -1;
    for (int j = 0; j < m; j++)
    {
      MatrixAlpha[i][j] = Matrix[i][j];
      if(j != m - 1) {
        if(MatrixAlpha[i][j] != previous) {
          if(consecutive >= 3){
            for (int x = consecutive; x > 0; x--) {
              MatrixAlpha[i][j - x] = 0;
            }            
          }    
          consecutive = 1;   
        } else {
          consecutive++;
        }
      } else {
        if(MatrixAlpha[i][j] != previous) {
          if(consecutive >= 3){
            for (int x = consecutive; x > 0; x--) {
              MatrixAlpha[i][j - x] = 0;
            }            
          }  
        } else if(consecutive >= 2) {
          for (int x = consecutive; x >= 0; x--) {
            MatrixAlpha[i][j - x] = 0;
          }   
        }
      }
      previous = Matrix[i][j];
    }
  }
  for (int j = 0; j < m; j++)
  {
    consecutive = 0;
    previous = -1;
    for (int i = 0; i < n; i++)
    {
      MatrixBeta[i][j] = Matrix[i][j];
      if(i != n - 1) {
        if(MatrixBeta[i][j] != previous) {
          if(consecutive >= 3){
            for (int x = consecutive; x > 0; x--) {
              MatrixBeta[i - x][j] = 0;
            }            
          }    
          consecutive = 1;   
        } else {
          consecutive++;
        }
      } else {
        if(MatrixBeta[i][j] != previous) {
          if(consecutive >= 3){
            for (int x = consecutive; x > 0; x--) {
              MatrixBeta[i - x][j] = 0;
            }            
          }  
        } else if(consecutive >= 2) {
          for (int x = consecutive; x >= 0; x--) {
            MatrixBeta[i - x][j] = 0;
          }   
        }
      }
      previous = Matrix[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(MatrixAlpha[i][j] == 0|| MatrixBeta[i][j] == 0) {
        Matrix[i][j] = 0;
      }
    }
  }
}

int countZeros(int Matrix[][MAX_SIZE], int n, int m) {
  int accumulator = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(Matrix[i][j] == 0)
        accumulator++;
    }
  }
  
  return accumulator;
}

void relocateZeros(int Matrix[][MAX_SIZE], int n, int m) {
  int auxiliar;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(Matrix[i][j] == 0) {
        for (int x = i - 1; x >= 0; x--)
        {
          auxiliar = Matrix[x][j];
          if (auxiliar == 0)
            break;
          Matrix[x][j] = Matrix[x+1][j];
          Matrix[x+1][j] = auxiliar;
        }
      }
    }
  }
  
}