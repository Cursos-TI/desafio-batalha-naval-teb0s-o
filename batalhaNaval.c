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
  printf("Tabuleiro:\n\n");

  printf("     A B C D E F G H I J\n    ____________________\n");
  for (int i = 0; i < 10; i++) {
    printf("%02d | ", i + 1);
    for (int j = 0; j < 10; j++) {
      printf("%d ", tabuleiro[j][i]);
    };
    printf("\n");
  };

  //Habilidades especiais:

  printf("\nHabilidades Especiais:\n");

  //Cone:

  printf("\nCone:\n\n");

  int cone[5][3] = {0};
  
  for (int i = 0; i < 3; i++){
    cone[2][0 + i] = 1;
    for (int j = 0; j < 3; j++){
      cone[1 + j][1] = 1;
      for (int j = 0; j < 5; j++){
        cone[0 + j][2] = 1;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", cone[j][i]);
    };
    printf("\n");
  };

  //Octaedro :

  printf("\nOctaedro:\n\n");

  int octaedro[5][3] = {0};

  for (int i = 0; i < 3; i++){
    octaedro[2][0 + i] = 1;
    for (int j = 0; j < 3; j++){
      octaedro[1 + j][1] = 1;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", octaedro[j][i]);
    };
    printf("\n");
  };

  //Cruz :

  printf("\nCruz\n\n");

  int cruz[5][3] = {0};

  for (int i = 0; i < 3; i++){
    cruz[2][0 + i] = 1;
    for (int j = 0; j < 5; j++){
      cruz[0 + j][1] = 1;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", cruz[j][i]);
    };
    printf("\n");
  };

  return 0;
};
