#include <stdio.h>

int main() {

  //Inicializar matriz tabuleiro
  int tabuleiro[10][10] = {0};

  //Inicializar posição do navio horizontal
  int linha_inicial_1 = 5;
  int coluna_inicial_1 = 5;
  int tamanho_1 = 3;

  //posiciona navio horizontal no tabuleiro
  for (int i = 0; i < tamanho_1; i++) {
    tabuleiro[linha_inicial_1 + i][coluna_inicial_1] = 3;
  }

  //Inicializar posição do navio vertical
  int linha_inicial_2 = 1;
  int coluna_inicial_2 = 1;
  int tamanho_2 = 3;


  //posiciona navio vertical no tabuleiro
  for (int i = 0; i < tamanho_2; i++) {
    tabuleiro[linha_inicial_2][coluna_inicial_2 + i] = 3;
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
