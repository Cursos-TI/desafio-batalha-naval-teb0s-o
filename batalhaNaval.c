#include <stdio.h>

int main() {

  //Inicializar matriz tabuleiro
  int tabuleiro[10][10] = {0};

  //Inicializar posição do navio horizontal
  int linha_inicial_h = 5;
  int coluna_inicial_h = 5;
  int tamanho_h = 3;

  //posiciona navio horizontal no tabuleiro
  for (int i = 0; i < tamanho_h; i++) {
    tabuleiro[linha_inicial_h + i][coluna_inicial_h] = 3;
  }

  //Inicializar posição do navio vertical
  int linha_inicial_v = 1;
  int coluna_inicial_v = 1;
  int tamanho_v = 3;

  //posiciona navio vertical no tabuleiro
  for (int i = 0; i < tamanho_v; i++) {
    tabuleiro[linha_inicial_v][coluna_inicial_v + i] = 3;
  }

  //Inicializar posição do navio diagonal 1
  int linha_inicial_d1 = 1;
  int coluna_inicial_d1 = 5;
  int tamanho_d1 = 3;

  //posiciona navio diagonal 1
    for (int i = 0; i < tamanho_d1; i++){
      tabuleiro[linha_inicial_d1 + i][coluna_inicial_d1 + i] = 3;
    }

  //Inicializar posição do navio diagonal 2
  int linha_inicial_d2 = 6;
  int coluna_inicial_d2 = 1;
  int tamanho_d2 = 3;

  //posiciona navio diagonal 1
    for (int i = 0; i < tamanho_d2; i++){
      tabuleiro[linha_inicial_d2 - i][coluna_inicial_d2 + i] = 3;
    }

  //Imprimir tabuleiro
  printf("     A B C D E F G H I J\n    ____________________\n");
  for (int i = 0; i < 10; i++) {
    printf("%02d | ", i + 1);
    for (int j = 0; j < 10; j++) {
      printf("%d ", tabuleiro[j][i]);
    };
    printf("\n");
  };

  return 0;
};
