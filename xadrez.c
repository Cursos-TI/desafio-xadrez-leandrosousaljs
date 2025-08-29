#include <stdio.h>

int main () {
  //Simulando movimento da Torre
  int movimentoTorre = 0;

  printf("Torre se movimentando...\n");
  
  while (movimentoTorre < 5 ) {
    printf("Direita\n");
    movimentoTorre++;
  }

  printf("Fim do movimento da Torre!\n");

  //Simulando movimento do Bispo
  int movimentoBispo = 0;

  printf("\nBispo se movimentando...\n");

  do {
    printf("Cima Direita\n");
    movimentoBispo++;
  } while (movimentoBispo < 5);

  printf("Fim do movimento do Bispo!\n");

  //Simulando movimento da Rainha
  printf("\nRainha se movimentando...\n");

  for (int i = 0; i < 8; i++) {
    printf("Esquerda\n");
  }

  printf("Fim do movimento da Rainha!\n");

  return 0;

}